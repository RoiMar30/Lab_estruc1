#pragma once
#include <iostream>
#include <string>

using namespace std;

const int LIME = 40;

struct Estudiante {
	int ci;
	string name;
	string surnames;
	int age;
	string direcction;
	int asists;
};

class C_Asistencia
{

private:
	Estudiante estudiantes[LIME];
	int allEst;

public:

	C_Asistencia() ;
	void datosEst(int ci, string name, string surnames, int age, string direcction, int asists);
	void mostrarListaEstudiantes();
	bool buscarEst(int ciEst);
	bool eliminarEst(int ciEst);
	void insertarAsist(int ciEst);
	void mostarHabi();
	void asistenciasEst(int ciEst);





};

