#pragma once
#include <GL/gl.h>
#include <GLFW/glfw3.h>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>

struct Point
{
    GLfloat x;
    GLfloat y;
    GLfloat z;

    // vars used in coloring
    GLfloat r;
    GLfloat g;
    GLfloat b;
    GLfloat a;
};

void DrawPoint(Point point, GLfloat size);