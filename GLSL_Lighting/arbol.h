
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>

#pragma once
class arbol
{
public:
	int tipo;
	arbol();
	arbol(int a);

	void DibujarArbol(float aX, float aY, float aZ);

	~arbol();

};

