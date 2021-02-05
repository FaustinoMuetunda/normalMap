#ifndef SCENEPROJTEX_H
#define SCENEPROJTEX_H

#include "recursos/ingredients/scene.h"
#include "recursos/ingredients/glslprogram.h"
#include "recursos/ingredients/plane.h"
#include "recursos/ingredients/teapot.h"

#include <glm/glm.hpp>

class SceneProjTex : public Scene
{
private:
    GLSLProgram prog;

    Teapot teapot;
    Plane plane;
    
    float angle, tPrev, rotSpeed;

    void setMatrices();
    void compileAndLinkShader();

public:
    SceneProjTex();

    void initScene();
    void update( float t );
    void render();
    void resize(int, int);
};

#endif
