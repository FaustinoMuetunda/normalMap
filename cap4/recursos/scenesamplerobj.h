#ifndef SCENESAMPLEROBJ_H
#define SCENESAMPLEROBJ_H

#include "recursos/ingredients/scene.h"
#include "recursos/ingredients/glslprogram.h"
#include "recursos/ingredients/plane.h"

#include <glm/glm.hpp>

class SceneSamplerObj : public Scene
{
private:
    GLSLProgram prog;

    Plane plane;

    float angle;
    GLuint linearSampler, nearestSampler;

    void setMatrices();
    void compileAndLinkShader();

public:
    SceneSamplerObj();

    void initScene();
    void update( float t );
    void render();
    void resize(int, int);
};

#endif
