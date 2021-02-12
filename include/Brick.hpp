//
// Created by Dijana Sazdevska on 2/9/2021.
//

#ifndef OPENGLPRJ_BRICK_H
#define OPENGLPRJ_BRICK_H

#include <glm/glm.hpp>
#include "Shader.hpp"

class Brick{
private:
glm::vec3 brickPosition;
float X_min;
float X_max;
float Y_min;
float Y_max;
float Z_min;
float Z_max;
public:
    Brick(glm::vec3 brickPosition,float X_min=-0.5,float X_max=0.5,float Y_min=-0.5,float Y_max= 0.5,float Z_min=-0.5,float Z_max=0.5);
    Brick();
    void draw(Shader shader);
    glm::vec3 getBrickPosition();

    float getXMin() const;

    float getXMax() const;

    float getYMin() const;

    float getYMax() const;

    float getZMin() const;

    float getZMax() const;

    bool isInBrick(glm::vec3 position);
};
#endif //OPENGLPRJ_BRICK_H
