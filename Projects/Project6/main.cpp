#include <GL/glut.h>

void display(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINES);
		glVertex3f(2.0, 4.0, 0.0);
		glVertex3f(8.0, 4.0, 0.0);
	glEnd();
	glFlush();
}

void myinit(void){
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 10.0, 0.0, 10.0);
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Sample Program");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();
}
