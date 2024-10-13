// #include <GLFW\glfw3.h>

#include "../include/GLFW/glfw3.h"
#include <iostream>

int main(int, char **) { std::cout << "Hello, from CPPGL11111!\n";
    GLFWwindow* window;
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
 }
