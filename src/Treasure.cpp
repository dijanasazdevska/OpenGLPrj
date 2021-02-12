//
// Created by Dijana Sazdevska on 2/12/2021.
//
#include "Treasure.hpp"
#include <glm/gtc/matrix_transform.hpp>


Treasure::Treasure(glm::vec3 treasurePos, float X_min, float X_max, float Y_min, float Y_max, float Z_min, float Z_max) {
    this->treasurePos=treasurePos;
    this->X_min=(this->treasurePos+X_min).x;
    this->X_max=(this->treasurePos+X_max).x;
    this->Y_min=(this->treasurePos+Y_min).y;
    this->Y_max=(this->treasurePos+Y_max).y;
    this->Z_min=(this->treasurePos+Z_min).z;
    this->Z_max=(this->treasurePos+Z_max).z;

}
void Treasure::draw(Shader shader) {
    glm::mat4 model=glm::mat4(1.0f);
    model=glm::translate(model,this->treasurePos);

    shader.setMat4("model",model);
    shader.use();
    glDrawArrays(GL_TRIANGLES,0,36);

}
bool Treasure::isInBox(glm::vec3 position) {
    return position.x>=X_min && position.x<=X_max && position.y >= Y_min && position.y <= Y_max;

}

const glm::vec3 &Treasure::getTreasurePos() const {
    return treasurePos;
}

float Treasure::getXMin() const {
    return X_min;
}

float Treasure::getXMax() const {
    return X_max;
}

float Treasure::getYMin() const {
    return Y_min;
}

float Treasure::getYMax() const {
    return Y_max;
}

float Treasure::getZMin() const {
    return Z_min;
}

float Treasure::getZMax() const {
    return Z_max;
}



