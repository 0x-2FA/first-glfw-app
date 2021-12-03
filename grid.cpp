#include "headers/grid.hpp"
#include "headers/primitives.hpp"
#include <GL/gl.h>

void DrawGrid(GLfloat width, GLfloat height, GLfloat grid_width)
{
    // draw each horizontal line
    for (float i = -height; i < height; i += grid_width) 
    {
        Point a = {-width, i, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f};
        Point b = {width, i, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f};

        DrawLine(a, b, 1.0f);
    }

    // draw each vertical line
    for (float i = -height; i < height; i += grid_width) 
    {
        Point a = {i, -height, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f};
        Point b = {i, height, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f};

        DrawLine(a, b, 1.0f);
    }
}