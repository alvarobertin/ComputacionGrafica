#include "arbol.h"

int tipo = 1;
arbol::arbol() {
}
arbol::arbol(int a){
	tipo = a;
}

void arbol::DibujarArbol(float aX, float aY, float aZ) {

	glPushMatrix();

		glTranslatef(aX, aY, aZ);

		if (tipo == 1) { // SAMAN

			//Copa del Árbol
			glPushMatrix();

			glTranslatef(0, 0.5, 0);
			glutSolidSphere(1, 20, 20);

			glPopMatrix();
		}
		else if (tipo == 2) { // PINO

			glPushMatrix();

			glTranslatef(0, -0.5, 0.5);
			glBegin(GL_TRIANGLES);
				glVertex3f(1.1, 0, 0);
				glVertex3f(-1.1, 0, 0);
				glVertex3f(0, 2.6, 0);
			glEnd();
			glPopMatrix();
		}
		
		//Tronco
		glPushMatrix();

			glRotatef(90, 1, 0, 0);
			glutSolidCylinder(0.5, 1.7, 20, 20);


		glPopMatrix();




	glPopMatrix();
}

arbol::~arbol() {

}