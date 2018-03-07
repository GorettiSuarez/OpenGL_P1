#include <stdio.h>
#include <GL\freeglut.h>
//María Goretti Suárez Rivero para CIU
void Init() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-2.0f, 2.0f, -2.0f, 2.0f, 2.0f, 0.0f);
}

void Display(){

	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex2f(0.0f, 0.0f);
		glColor3f(0.0f, 1.0f, 0.0f);
		glVertex2f(1.0f, 0.0f);
		glColor3f(1.0f, 0.0f, 1.0f);
		glVertex2f(0.0f, 1.0f);

		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex2f(0.0f, 0.0f);
		glVertex2f(-1.0f, 0.0f);
		glVertex2f(0.0f, -1.0f);
	glEnd();
	glFlush();
	
}

int main(int argc, char *argv[]) {
	glutInit(&argc, argv);
	glutInitWindowPosition(50, 50);
	glutInitWindowSize(500, 500);
	glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);
	glutCreateWindow("OpenGL Practica 1_1");
	Init();
	glutDisplayFunc(Display);

	glutMainLoop();

	return 0;
}