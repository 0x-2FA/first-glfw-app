#pragma once
#include <GL/gl.h>

struct Point
{
    GLfloat x;
    GLfloat y;
    GLfloat z;

    // vars used in coloring
    GLfloat r, g, b, a;
};

void DrawPoint(Point point, GLfloat size);

void DrawLine(Point a, Point b, GLfloat width);

