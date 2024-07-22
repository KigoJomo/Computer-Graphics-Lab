#include <GL/glut.h>

// Window dimensions
const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;

// Function declarations
void display();
void reshape(int width, int height);

int main(int argc, char **argv)
{
    // Initialize GLUT
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
    glutCreateWindow("OpenGL Teapot");

    // Register callbacks
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    // Enable depth test
    glEnable(GL_DEPTH_TEST);

    // Start the GLUT main loop
    glutMainLoop();

    return 0;
}

void display()
{
    // Clear the color and depth buffers
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Set the background color
    glClearColor(0.2f, 0.2f, 0.2f, 1.0f);

    // Set up the modelview matrix
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    // Move the teapot back a bit
    glTranslatef(0.0f, 0.0f, -5.0f);

    // Set the teapot color
    glColor3f(0.0f, 1.0f, 1.0f);

    // Render the teapot
    glutWireTeapot(1.0);

    // Swap the buffers
    glutSwapBuffers();
}

void reshape(int width, int height)
{
    // Set the viewport to match the window size
    glViewport(0, 0, width, height);

    // Set up the projection matrix
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)width / (double)height, 1.0, 100.0);
}