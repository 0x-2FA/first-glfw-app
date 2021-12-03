/*******************************
*  Contributors: 0x-2FA                       
*  Description: Learn and implement Opengl Primitives  
*  License: MIT                                
********************************/

#include "headers/primitives.hpp"
#include <GL/gl.h>
#include <GLFW/glfw3.h>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>

void DrawPoint(Point point, GLfloat size)
{
    glPointSize(size);

    glBegin(GL_POINTS);
        glColor4f(point.r, point.g, point.b, point.a);
        glVertex3f(point.x, point.y, point.z);
    glEnd();
}