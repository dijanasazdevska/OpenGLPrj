//
// Created by Dijana Sazdevska on 2/9/2021.
//
#include "Scene.hpp"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <math.h>

Scene::Scene() {
    camera=*(new Camera(glm::vec3(0.5f,-2.0f,0.0f)));


}
void Scene::draw(Shader brickShader,int width,int height) {

    glm::mat4 view          = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
    glm::mat4 projection    = glm::mat4(1.0f);
    projection = glm::perspective(glm::radians(95.0f), (float)width / (float)height, 0.1f, 100.0f);
    view       = camera.GetViewMatrix();
    // pass transformation matrices to the shader
    brickShader.setMat4("projection", projection); // note: currently we set the projection matrix each frame, but since the projection matrix rarely changes it's often best practice to set it outside the main loop only once.
    brickShader.setMat4("view", view);
   brickShader.setBool("isBrick",true);
   brickShader.setBool("isTreasure",false);
    brickShader.use();
    for(int i = 0;i < this->bricks.size();i++){
        this->bricks[i].draw(brickShader);
    }
brickShader.setBool("isBrick",false);
    brickShader.setBool("isTreasure",false);
    brickShader.use();
    for(int i = 0;i < this->boxes.size();i++){
    this->boxes[i].draw(brickShader);
    }


    brickShader.setBool("isTreasure",true);
    brickShader.setBool("isBrick",false);
    brickShader.use();
    for(int i = 0;i < this->treasures.size();i++){
        this->treasures[i].draw(brickShader);
    }

}
void Scene::pushBrick(Brick *brick) {
    this->bricks.push_back(*brick);
}

void Scene::pushBox(Box *box) {
    this->boxes.push_back(*box);
}

void Scene::ProcessKeyboard(Camera_Movement direction, float deltaTime) {
    glm::vec3 lastCameraPosition=camera.Position;
    camera.ProcessKeyboard(direction,deltaTime);
    bool translateBox=false;
    int i;
    int index=0;
    bool out=false;
for( i =0 ; i < this->boxes.size();i++){
    if(boxes[i].isInBox(camera.Position) ){
        if(!checkCollisionBetweenBoxes(i,direction)){
            translateBox=true;
            std::cout<<checkCollisionBetweenBoxes(i,direction)<<std::endl;
            index=i;
            break;
        }
        else{
            out=true;
            break;
        }


    }





}



switch(direction) {
    case LEFT:
        for (int i = 0; i < this->bricks.size(); i++) {
            if(translateBox)
                out = out || this->bricks[i].isInBrick(camera.Position-glm::vec3(1.0f,0.0f,0.0f));
            else
                out = out || this->bricks[i].isInBrick(camera.Position);





        }
        if (out){
            camera.ProcessKeyboard(RIGHT, deltaTime);


        }
        else{
            this->translateBox(index,camera.Position-lastCameraPosition);
        }
        break;
    case RIGHT:
        for (int i = 0; i < this->bricks.size(); i++) {
            if(translateBox)
                out = out || this->bricks[i].isInBrick(camera.Position+glm::vec3(1.0f,0.0f,0.0f));
            else
                out = out || this->bricks[i].isInBrick(camera.Position);





        }
        if (out){
            camera.ProcessKeyboard(LEFT, deltaTime);


        }
        else{
            this->translateBox(index,camera.Position-lastCameraPosition);
        }
        break;
        case DOWN:
            for (int i = 0; i < this->bricks.size(); i++) {
                if(translateBox)
                    out = out || this->bricks[i].isInBrick(camera.Position-glm::vec3(0.0f,1.0f,0.0f));
                else
                    out = out || this->bricks[i].isInBrick(camera.Position);





            }
        if (out){
            camera.ProcessKeyboard(UP, deltaTime);


        }
        else{
            this->translateBox(index,camera.Position-lastCameraPosition);
        }
        break;

    case UP:
        for (int i = 0; i < this->bricks.size(); i++) {
            if(translateBox)
                out = out || this->bricks[i].isInBrick(camera.Position+glm::vec3(0.0f,1.0f,0.0f));
            else
                out = out || this->bricks[i].isInBrick(camera.Position);





        }
        if (out){
            camera.ProcessKeyboard(DOWN, deltaTime);


        }
        else{
            this->translateBox(index,camera.Position-lastCameraPosition);
        }
        break;



}
std::cout<<camera.Position.x<<" "<<camera.Position.y<<" "<<camera.Position.z<<std::endl;

}
bool Scene::BoxIsCollidedToBrick(Camera_Movement direction, Box box) {
    switch(direction){
        case LEFT:
        for(int i = 0;i < bricks.size();i++){
            glm::vec3 result=bricks[i].getBrickPosition()-box.getBoxPosition();
        }
        break;

        default:
            break;
    }
    return false;
}
void Scene::translateBox(int index, glm::vec3 translateVector) {
    translateVector.z=0.0f;
    this->boxes[index].translate(translateVector);
    for(int i =0;i < treasures.size();i++){
        std::cout<<treasures[i].getTreasurePos().x<<" "<<treasures[i].getTreasurePos().y<<std::endl;
        std::cout<<boxes[index].getBoxPosition().x<<" "<<boxes[index].getBoxPosition().y<<std::endl;
    }



}
bool Scene::checkCollisionBetweenBoxes(int index, Camera_Movement direction) {
    switch(direction){
        case LEFT:
            for(int i = 0;i < boxes.size();i++){
                if(index!=i)
                {
                    bool tmp=(boxes[index].isInBox(glm::vec3(boxes[i].getXMax(),boxes[i].getYMin(),boxes[i].getZMin()))&&boxes[index].isInBox(glm::vec3(boxes[i].getXMax(),boxes[i].getYMax(),boxes[i].getZMin()))&&!boxes[index].isInBox(glm::vec3(boxes[i].getXMin(),boxes[i].getYMin(),boxes[i].getZMin()))&&!boxes[index].isInBox(glm::vec3(boxes[i].getXMin(),boxes[i].getYMax(),boxes[i].getZMin())));
                    if(tmp)
                        return tmp;
                }

            }
            break;

                case RIGHT:
                    for(int i = 0;i < boxes.size();i++){
                        if(index!=i)
                        {
                            bool tmp=(!boxes[index].isInBox(glm::vec3(boxes[i].getXMax(),boxes[i].getYMin(),boxes[i].getZMin()))&&!boxes[index].isInBox(glm::vec3(boxes[i].getXMax(),boxes[i].getYMax(),boxes[i].getZMin()))&&boxes[index].isInBox(glm::vec3(boxes[i].getXMin(),boxes[i].getYMin(),boxes[i].getZMin()))&&boxes[index].isInBox(glm::vec3(boxes[i].getXMin(),boxes[i].getYMax(),boxes[i].getZMin())));
                            if(tmp)
                                return tmp;
                        }

                    }
                    break;

        case UP:
            for(int i = 0;i < boxes.size();i++){
                if(index!=i)
                {
                    bool tmp=(boxes[index].isInBox(glm::vec3(boxes[i].getXMin(),boxes[i].getYMin(),boxes[i].getZMin()))&&boxes[index].isInBox(glm::vec3(boxes[i].getXMax(),boxes[i].getYMin(),boxes[i].getZMin()))&&!boxes[index].isInBox(glm::vec3(boxes[i].getXMax(),boxes[i].getYMin(),boxes[i].getZMin()))&&!boxes[index].isInBox(glm::vec3(boxes[i].getXMax(),boxes[i].getYMax(),boxes[i].getZMin())));
                    if(tmp)
                        return tmp;
                }

            }
            break;
        default:
            break;
    }
    return false;
}

void Scene::pushTreasure(Treasure *treasure) {
    this->treasures.push_back(*treasure);
}

