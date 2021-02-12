//
// Created by Dijana Sazdevska on 2/9/2021.
//
#include "Brick.hpp"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include<iostream>


Brick::Brick(glm::vec3 brickPosition, float X_min, float X_max, float Y_min, float Y_max, float Z_min, float Z_max) {
    this->brickPosition=brickPosition;
    this->X_min=(this->brickPosition+X_min).x;
    this->X_max=(this->brickPosition+X_max).x;
    this->Y_min=(this->brickPosition+Y_min).y;
    this->Y_max=(this->brickPosition+Y_max).y;
    this->Z_min=(this->brickPosition+Z_min).z;
    this->Z_max=(this->brickPosition+Z_max).z;







}
void Brick::draw(Shader shader) {
    glm::mat4 model=glm::mat4(1.0f);
   model=glm::translate(model,brickPosition);
    shader.setMat4("model",model);
    shader.use();

    glDrawArrays(GL_TRIANGLES,0,36);


}
bool Brick::isInBrick(glm::vec3 position) {
    return position.x>=X_min && position.x<=X_max && position.y >= Y_min && position.y <= Y_max;

}
glm::vec3 Brick::getBrickPosition() {
    return this->brickPosition;
}

float Brick::getXMin() const {
    return X_min;
}

float Brick::getXMax() const {
    return X_max;
}

float Brick::getYMin() const {
    return Y_min;
}

float Brick::getYMax() const {
    return Y_max;
}

float Brick::getZMin() const {
    return Z_min;
}

float Brick::getZMax() const {
    return Z_max;
}

