#ifndef SCENEALPHATEST_H
#define SCENEALPHATEST_H

#include "recursos/ingredients/scene.h"
#include "recursos/ingredients/teapot.h"
#include "recursos/ingredients/glslprogram.h"

#include <glm/glm.hpp>

class SceneAlphaTest : public Scene
{
private:
    GLSLProgram prog;

    Teapot teapot;

    float angle, tPrev, rotSpeed;

    void setMatrices();
    void compileAndLinkShader();

public:
    SceneAlphaTest();

    void initScene();
    void update( float t );
    void render();
    void resize(int, int);
};

#endif // SCENEALPHATEST_H
