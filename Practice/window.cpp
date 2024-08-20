#include <GL/glut.h>
#include <random>

using namespace std;

void displaySquare(){
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0.2, 0.2, 0.2);
  glBegin(GL_QUADS);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(-0.5, 0.5);
  glEnd();
  glFlush();
}

void displayLine(){
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1.0, 1.0, 1.0); 
  glLineWidth(1);
  glBegin(GL_LINES);
    glVertex2f(-0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(0.5, 0.5);
    glVertex2f(-0.5, 0.5);
  glEnd();
  glFlush();
}

void displayPoints(){
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(-1.0, 1.0);

  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1.0, 1.0, 1.0);
  glPointSize(1);
  glBegin(GL_POINTS);
  for(int i = 0; i<2000; i++ ){
    glVertex2f(dis(gen), dis(gen));
  }
  glEnd();
  glFlush();
}

void displayTriangle() {
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1.0, 1.0, 1.0); // color 
  glBegin(GL_TRIANGLE_STRIP); 
    glVertex2f(0.0, 0.0); //v1
    glVertex2f(0.0, 1.0); //v2
    glVertex2f(1.0, 0.0); //v3
    glVertex2f(1.0, 1.0); //v4
    glVertex2f(2.0, 0.0); //v5
  glEnd();
  glFlush();
}

int main(int argc, char** argv){
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(500, 500);
  glutInitWindowPosition(100, 100);
  glutCreateWindow("Night Sky");
  glutDisplayFunc(displayTriangle);
  glClearColor(0.0, 0.0, 0.0, 1.0);
  glutMainLoop();
  return 0;
}