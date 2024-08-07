// Include Header files
#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0); // Set display window color to white.
    glMatrixMode(GL_PROJECTION); // Set projection parameters.
    gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

void lineSegment(void)
{
    glClear(GL_COLOR_BUFFER_BIT); // Clear display window.
    glColor3f(1.0, 0.0, 0.0); // Set line segment color to red.
    glBegin(GL_LINES);
    glVertex2i(180, 15); // Specify line-segment geometry.
    glVertex2i(10, 145);
    glEnd();
    glFlush(); // Process all OpenGL routines as quickly as possible.
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv); // Initialize GLUT.
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Set display mode.
    glutInitWindowPosition(50, 100); // Set top-left display-window position.
    glutInitWindowSize(400, 300); // Set display-window width and height.
    glutCreateWindow("An Example OpenGL Program"); // Create display window.
    init(); // Execute initialization procedure.
    glutDisplayFunc(lineSegment); // Send graphics to display window.
    glutMainLoop(); // Display everything and wait.
    return 0; // Standard way to end `main` function in C/C++
}

