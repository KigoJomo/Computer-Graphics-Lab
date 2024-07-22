#include <GL/glut.h>

// Window dimensions
const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;

float angle = 0.0f; // Initial rotation angle

// Function declarations
void display();
void reshape(int width, int height);
void idle();

int main(int argc, char **argv)
{
    // Initialize GLUT
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
    glutCreateWindow("OpenGL Teapot");

    // Register callbacks
    glutIdleFunc(idle);
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

    // Apply rotation to the teapot
    glRotatef(angle, 0.0f, 1.0f, 0.0f); // Rotate around the y-axis

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

void idle()
{
    // Update the rotation angle
    angle += 0.5f;

    // Redisplay
    glutPostRedisplay();
}
