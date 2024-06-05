#include <windows.h>
#include <GL/glut.h>

void init(void) {
  glClearColor(0.0, 0.0, 0.0, 0.0); // Set background color to white
  glLineWidth(2.0); // Set the line width to 2.0
  glMatrixMode(GL_PROJECTION); // Set the matrix mode to projection
  gluOrtho2D(0.0, 300.0, 0.0, 300.0); // Set the projection window
}

void Line(void) {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear the screen
  glColor3f(1.0, 1.0, 1.0); // Set the line color to red
  glBegin(GL_LINES); // Specify that we want to draw lines
  glVertex2i(150, 20); // Set the starting point of the line
  glVertex2i(150, 150); // Set the ending point of the line
  glEnd(); // End drawing lines
  glFlush(); // Flush the drawing commands
}

int main(int argc, char** argv) {
  glutInit(&argc, argv); // Initialize GLUT
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Set the display mode to single buffered with RGB colors
  glutInitWindowPosition(100, 100); // Set the window position
  glutInitWindowSize(400, 400); // Set the window size
  glutCreateWindow("Heheee Bwoy"); // Create a window with a title
  init(); // Call the init function to initialize settings
  glutDisplayFunc(Line); // Set the display callback function to Line
  glutMainLoop(); // Enter the GLUT main loop
  return 0;
}

