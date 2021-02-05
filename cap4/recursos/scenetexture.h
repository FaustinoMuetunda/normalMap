#ifndef SCENETEXTURE_H
#define SCENETEXTURE_H

#include "recursos/ingredients/scene.h"
#include "recursos/ingredients/glslprogram.h"
#include "recursos/ingredients/cube.h"


#include <glm/glm.hpp>

class SceneTexture : public Scene
{
private:
    GLSLProgram prog;

    Cube cube;

    float angle;

    void setMatrices();
    void compileAndLinkShader();

public:
    SceneTexture();

    void initScene();
    void update( float t );
    void render();
    void resize(int, int);
};

#endif // SCENEPERFRAGMENT_H
