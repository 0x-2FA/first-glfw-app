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

void DrawPoint(struct Point point, GLfloat size);

void DrawLine(struct Point a, struct Point b, GLfloat width);

void DrawRectangle(struct Point a, struct Point b, struct Point c, struct Point d);