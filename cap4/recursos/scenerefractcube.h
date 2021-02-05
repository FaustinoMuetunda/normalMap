#ifndef SCENEREFRACTCUBE_H
#define SCENEREFRACTCUBE_H



#include "recursos/ingredients/scene.h"
#include "recursos/ingredients/glslprogram.h"
#include "recursos/ingredients/teapot.h"
#include "recursos/skybox.h"
#include <glm/glm.hpp>



class SceneRefractCube : public Scene
{
private:
    GLSLProgram prog;

    Teapot teapot;
    SkyBox sky;

    float angle, tPrev, rotSpeed;

    void setMatrices();
    void compileAndLinkShader();
    void loadCubeMap( const char * baseFileName );

public:
    SceneRefractCube();

    void initScene();
    void update( float t );
    void render();
    void resize(int, int);
};

#endif // SCENEREFRACTCUBE_H
