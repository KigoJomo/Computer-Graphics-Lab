// Include Header files
#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0); // Set display window color to white.
    glMatrixMode(GL_PROJECTION);      // Set projection parameters.
    gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

void drawTriangle(void)
{
    glClear(GL_COLOR_BUFFER_BIT); // Clear display window.
    glColor3f(0.5, 0.0, 1.0);     // Set the triangle color to blue.
    glBegin(GL_TRIANGLES);
    glVertex2i(50, 50);           // Specify the vertices of the triangle.
    glVertex2i(150, 50);
    glVertex2i(100, 150);
    glEnd();
    glFlush(); // Process all OpenGL routines as quickly as possible.
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);                            // Initialize GLUT.
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);      // Set display mode.
    glutInitWindowPosition(50, 100);                  // Set top-left display-window position.
    glutInitWindowSize(400, 300);                     // Set display-window width and height.
    glutCreateWindow("OpenGL Blue Triangle");         // Create display window.
    init();                                           // Execute initialization procedure.
    glutDisplayFunc(drawTriangle);                    // Send graphics to display window.
    glutMainLoop();                                   // Display everything and wait.
    return 0;
}

