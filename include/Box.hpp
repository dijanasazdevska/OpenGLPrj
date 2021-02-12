//
// Created by Dijana Sazdevska on 2/10/2021.
//

#ifndef OPENGLPRJ_BOX_HPP
#define OPENGLPRJ_BOX_HPP

#include <glm/glm.hpp>
#include "Shader.hpp"

class Box{
private:
    glm::vec3 boxPosition;
    float X_min;
    float X_max;
    float Y_min;
    float Y_max;
    float Z_min;
    float Z_max;
    bool isStuck;
public:
    Box(glm::vec3 brickPosition,float X_min=-0.5,float X_max=0.5,float Y_min=-0.5,float Y_max= 0.5,float Z_min=-0.5,float Z_max=0.5,bool isStuck=false);
    Box();
    void draw(Shader shader);
    bool isInBox(glm::vec3 position);

    const glm::vec3 &getBoxPosition() const;

    float getXMin() const;

    void setBoxPosition(const glm::vec3 &boxPosition);

    void setXMin(float xMin);

    void setXMax(float xMax);

    void setYMin(float yMin);

    void setYMax(float yMax);

    void setZMin(float zMin);

    void setZMax(float zMax);

    float getXMax() const;

    float getYMin() const;

    float getYMax() const;

    float getZMin() const;

    float getZMax() const;

    void translate(glm::vec3 translateVector);

    };



#endif //OPENGLPRJ_BOX_HPP
