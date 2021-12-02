#include <GL/gl.h>
#include <GLFW/glfw3.h>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    // init glfw window
    GLFWwindow *window;

    if (!glfwInit()) 
    {
        return -1;
    }

    // declare basic properties of the application
    int width = 1024;
    int height = 768;
    const char *title = "First GLFW App";

    window = glfwCreateWindow(width, height, title, nullptr, nullptr);

    if(!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    // main app loop
    while (!glfwWindowShouldClose(window)) 
    {
        // setup viewport and clear screen buffer
        float ratio;
        
        glfwGetFramebufferSize(window, &width, &height);
        ratio = (float)width / (float)height;

        glViewport(0, 0, width, height);
        glClear(GL_COLOR_BUFFER_BIT);

        // setting up a camera
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glOrtho(-ratio, ratio, -1.f, 1.f, 1.f, -1.f);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();

        // creating a rotating rgb triangle
        glRotatef((float)glfwGetTime() * 50.f, 0.f, 0.f, 1.f);
        glBegin(GL_TRIANGLES);
            glColor3f(1.f, 0.f, 0.f);
            glVertex3f(-0.6f, -0.4f, 0.f);
            glColor3f(0.f, 1.f, 0.f);
            glVertex3f(0.6f, -0.4f, 0.f);
            glColor3f(0.f, 0.f, 1.f);
            glVertex3f(0.f, 0.6f, 0.f);
        glEnd();

        glfwSwapBuffers(window);
        glfwPollEvents();

    }

    // release memory and stop glfw
    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}