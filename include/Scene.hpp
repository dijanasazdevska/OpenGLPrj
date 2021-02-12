//
// Created by Dijana Sazdevska on 2/9/2021.
//

#ifndef OPENGLPRJ_SCENE_HPP
#define OPENGLPRJ_SCENE_HPP

#include <vector>
#include <GLFW/glfw3.h>
#include "Brick.hpp"
#include "Camera.hpp"
#include "Box.hpp"
#include "Treasure.hpp"

class Scene{
private:
    std::vector<Brick> bricks;
    std::vector<Box> boxes;
    Camera camera;
    std::vector<Treasure> treasures;
public:
    Scene();
    void pushBrick(Brick *brick);
    void pushBox(Box *box);
    void pushTreasure(Treasure *treasure);


    void draw(Shader brickShader ,int width,int height);

   void ProcessKeyboard(Camera_Movement direction, float deltaTime);
   bool BoxIsCollidedToBrick(Camera_Movement direction,Box box);
   void translateBox(int index,glm::vec3 translateVector);
   bool checkCollisionBetweenBoxes(int index, Camera_Movement direction);

};
#endif //OPENGLPRJ_SCENE_HPP
