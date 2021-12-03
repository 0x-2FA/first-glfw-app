#include "headers/primitives.hpp"
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

        // creating a point
        struct Point point = {0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f};

        DrawPoint(point, 5.0f);

        glfwSwapBuffers(window);
        glfwPollEvents();

    }

    // release memory and stop glfw
    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}