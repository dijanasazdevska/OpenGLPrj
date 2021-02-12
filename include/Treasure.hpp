//
// Created by Dijana Sazdevska on 2/12/2021.
//
#include <glm/glm.hpp>
#include "Shader.hpp"

#ifndef OPENGLPRJ_TREASURE_HPP
#define OPENGLPRJ_TREASURE_HPP
class Treasure{
private:
    glm::vec3 treasurePos;
    float X_min;
    float X_max;
    float Y_min;
    float Y_max;
    float Z_min;
    float Z_max;
public:
    Treasure(glm::vec3 brickPosition,float X_min=-0.5,float X_max=0.5,float Y_min=-0.5,float Y_max= 0.5,float Z_min=-0.5,float Z_max=0.5);
    Treasure();
    void draw(Shader shader);
    bool isInBox(glm::vec3 position);

    const glm::vec3 &getTreasurePos() const;

    float getXMin() const;

    float getXMax() const;

    float getYMin() const;

    float getYMax() const;

    float getZMin() const;

    float getZMax() const;

};
#endif //OPENGLPRJ_TREASURE_HPP
