

#include <Windows.h>
#include <GL\glew.h>
#include <GL\freeglut.h>
#include <iostream>

GLfloat gfPosX = 0.0;
GLfloat gfDeltaX = .0001;

GLfloat gfPosX1 = 0.0;
GLfloat gfDeltaX2 = .0001;
  
 GLfloat gfPosX3 = 0.0;
GLfloat gfDeltaX4 = .0001;
   
GLfloat gfposx5=0.0;
GLfloat gfDeltax6=0.0001;
void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	//glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINES);
		

		glVertex3f(gfPosX, 0.45, 0.0);
		glVertex3f(1.0 - gfPosX, 0.75,0.0);

		glVertex3f(1.0 - gfPosX, 0.95, 0.0);
		glVertex3f(gfPosX3, 0.80,0.0);
		

		glVertex3f(gfPosX, 0.45, 0.0);
		glVertex3f(gfPosX3, 0.80,0.0);

		glVertex3f(1.0-gfPosX,0.75,0.0);
		glVertex3f(1.0-gfPosX3,0.95,0.0);
	
	
	
	glEnd();
	glBegin(GL_POINTS);
	glVertex2d(gfPosX,0.25);
		glEnd();
		
	glFlush();
	gfPosX += gfDeltaX;
	gfPosX1 += gfDeltaX2;
	gfPosX3 += gfDeltaX4;
	gfposx5 +=gfDeltax6;

	if (gfPosX >= 1.0 || gfPosX <= 0.0 )
	{
		gfDeltaX = -gfDeltaX;
			}

	/*if(gfPosX1 >= 1.0 || gfPosX1 <= 0.0)
	{
		gfDeltaX2 = -gfDeltaX2;


	}*/

	if(gfPosX3 >= 1.0 || gfPosX3 <= 0.0)
	{
		gfDeltaX4 = -gfDeltaX4;
		
	}
	/*if(gfposx5 >=1.0 || gfposx5<=0.0)
	{
		gfDeltax6 =-gfDeltax6;
	}*/

//	glutPushWindow();
	glutPostRedisplay();
	//glutPostOverlayRedisplay();
}

void Initialize() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv) {
	glutInit(&iArgc, cppArgv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1000,550);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Rectangle Rotation");
	Initialize();
	glutDisplayFunc(Draw);
	glutMainLoop();
	return 0;
}
