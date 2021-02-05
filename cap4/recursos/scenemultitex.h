#ifndef SCENEMULTITEX_H
#define SCENEMULTITEX_H

#include "recursos/ingredients/scene.h"
#include "recursos/ingredients/glslprogram.h"
#include "recursos/ingredients/cube.h"

#include <glm/glm.hpp>

class SceneMultiTex : public Scene
{
private:
    GLSLProgram prog;

    Cube cube;

    void setMatrices();
    void compileAndLinkShader();

public:
    SceneMultiTex();

    void initScene();
    void update( float t );
    void render();
    void resize(int, int);
};

#endif // SCENEMULTITEX_H
