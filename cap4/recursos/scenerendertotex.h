#ifndef SCENERENDERTOTEX_H
#define SCENERENDERTOTEX_H

#include "recursos/ingredients/scene.h"
#include "recursos/ingredients/glslprogram.h"
#include "recursos/ingredients/cube.h"
#include "recursos/ingredients/teapot.h"

#include <glm/glm.hpp>

class SceneRenderToTex : public Scene
{
private:
    GLSLProgram prog;

    GLuint fboHandle;
    Cube cube;
    Teapot teapot;

    float angle;
    float tPrev, rotSpeed;

    void setMatrices();
    void compileAndLinkShader();
    void setupFBO();
    void renderToTexture();
    void renderScene();

public:
    SceneRenderToTex();

    void initScene();
    void update( float t );
    void render();
    void resize(int, int);
};

#endif // SCENERENDERTOTEX_H
