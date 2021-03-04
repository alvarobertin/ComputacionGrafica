#include "Robot.h"
#define NumSeg 4

Robot::Robot() {
}

void Robot::DibujarRobot() {

	glPushMatrix();

	glPushMatrix();
		//glRotatef(-90, 0, 1, 0);
		glScalef(1, 0.5, 1);
		glTranslatef(-1, 0.0, 0.0);
		glutSolidSphere(1.5, 20, 20);
	glPopMatrix();


	glTranslatef(-0.5, 0.0, 0.0);
	glRotatef((GLfloat)30, 0.0, 0.0, 1.0);
	glTranslatef(0.5, 0.0, 0.0);
	glPushMatrix();
	glScalef(1.0, 0.4, 0.5);
	glutSolidCube(1.0);
	glPopMatrix();

	for (int i = 0; i < NumSeg; i++) {

		glTranslatef(0.5, 0.0, 0.0);
		glRotatef((GLfloat)30, 0.0, 0.0, 1.0);

		glPushMatrix();
			glRotatef((GLfloat)-60, 0.0, 0.0, 1.0);
			glTranslatef(0.5, 0.0, 0.0);
			glBegin(GL_TRIANGLES);
			glVertex3f(0.5, 0, 0);
			glVertex3f(-0.5, 0, 0);
			glVertex3f(0, 0.5, 0);
			glEnd();
		glPopMatrix();

		glTranslatef(0.3, 0.0, 0.0);
		glPushMatrix();
		glScalef(1.0, 0.4, 0.5);
		glutSolidCube(1.0);
		glPopMatrix();
	}

	glPopMatrix();
}

Robot::~Robot() {

}