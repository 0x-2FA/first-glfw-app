/****************************************
*  Contributors: 0x-2FA                       
*  Description: Learn and implement Opengl Primitives  
*  License: MIT                                
*****************************************/

#include "headers/primitives.hpp"
#include <GL/gl.h>
#include <GL/glext.h>


void DrawPoint(Point point, GLfloat size)
{
    glPointSize(size);

    glBegin(GL_POINTS);
        glColor4f(point.r, point.g, point.b, point.a);
        glVertex3f(point.x, point.y, point.z);
    glEnd();
}

void DrawLine(Point a, Point b, GLfloat width)
{
    glLineWidth(width);

    glBegin(GL_LINES);
        glColor4f(a.r, a.g, a.b, a.a);
        glVertex3f(a.x, a.y, a.z);
        
        glColor4f(b.r, b.g, b.b, b.a);
        glVertex3f(b.x, b.y, b.z);
    glEnd();
}

void DrawRectangle(struct Point a, struct Point b, struct Point c, struct Point d)
{
    glBegin(GL_LINE_LOOP);
        glColor4f(a.r, a.g, a.b, a.a);
        glVertex3f(a.x, a.y, a.z);

        glColor4f(b.r, b.g, b.b, b.a);
        glVertex3f(b.x, b.y, b.z);

        glColor4f(c.r, c.g, c.b, c.a);
        glVertex3f(c.x, c.y, c.z);

        glColor4f(d.r, d.g, d.b, d.a);
        glVertex3f(d.x, d.y, d.z);
    glEnd();
}