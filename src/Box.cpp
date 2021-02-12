#include <Box.hpp>
#include <glm/gtc/matrix_transform.hpp>

//
// Created by Dijana Sazdevska on 2/10/2021.
//
Box::Box(glm::vec3 boxPosition, float X_min, float X_max, float Y_min, float Y_max, float Z_min, float Z_max,bool isStuck) {
    this->isStuck=isStuck;
    this->boxPosition=boxPosition;
    this->X_min=(this->boxPosition+X_min).x;
    this->X_max=(this->boxPosition+X_max).x;
    this->Y_min=(this->boxPosition+Y_min).y;
    this->Y_max=(this->boxPosition+Y_max).y;
    this->Z_min=(this->boxPosition+Z_min).z;
    this->Z_max=(this->boxPosition+Z_max).z;

}
void Box::draw(Shader shader) {

    glm::mat4 model=glm::mat4(1.0f);
    model=glm::translate(model,this->boxPosition);
    shader.setMat4("model",model);
    glDrawArrays(GL_TRIANGLES,0,36);

}
bool Box::isInBox(glm::vec3 position) {
    return position.x>=X_min && position.x<=X_max && position.y >= Y_min && position.y <= Y_max;

}
void Box::translate(glm::vec3 translateVector) {
    this->X_min=(translateVector+X_min).x;
    this->X_max=(translateVector+X_max).x;
    this->Y_min=(translateVector+Y_min).y;
    this->Y_max=(translateVector+Y_max).y;
    this->Z_min=(translateVector+Z_min).z;
    this->Z_max=(translateVector+Z_max).z;
    this->boxPosition=this->boxPosition+translateVector;

}

const glm::vec3 &Box::getBoxPosition() const {
    return boxPosition;
}

float Box::getXMin() const {
    return X_min;
}

float Box::getXMax() const {
    return X_max;
}

float Box::getYMin() const {
    return Y_min;
}

float Box::getYMax() const {
    return Y_max;
}

float Box::getZMin() const {
    return Z_min;
}

float Box::getZMax() const {
    return Z_max;
}

void Box::setBoxPosition(const glm::vec3 &boxPosition) {
    Box::boxPosition = boxPosition;
}

void Box::setXMin(float xMin) {
    X_min = xMin;
}

void Box::setXMax(float xMax) {
    X_max = xMax;
}

void Box::setYMin(float yMin) {
    Y_min = yMin;
}

void Box::setYMax(float yMax) {
    Y_max = yMax;
}

void Box::setZMin(float zMin) {
    Z_min = zMin;
}

void Box::setZMax(float zMax) {
    Z_max = zMax;
}
