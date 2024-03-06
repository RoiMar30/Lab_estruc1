#include "C_Asistencia.h"

C_Asistencia::C_Asistencia()
{
}

void C_Asistencia::datosEst(int ci, string name, string surnames, int age, string direcction, int asists)
{
	if (allEst < LIME) {
		estudiantes[allEst].ci = ci;
		estudiantes[allEst].name = name;
		estudiantes[allEst].surnames = surnames;
		estudiantes[allEst].age = age;
		estudiantes[allEst].direcction = direcction;
		estudiantes[allEst].asists = 0;

		allEst+=1;

		cout << "Se registro el Estudiante" << endl;
	}
	else {

		cout << "No se pudo registrar el estudiante. Grupo lleno." << endl;

	}
}
void C_Asistencia::mostrarListaEstudiantes()
{
	cout << "Registro Estudiantes" << endl;
	for (int i = 0; i < allEst; i++) {
		cout << "CU: " << estudiantes[i].ci << ", Nombre: " << estudiantes[i].name
		<< ", Apellido: " << estudiantes[i].surnames << ", Edad: " << estudiantes[i].age
		<< ", Direccion: " << estudiantes[i].direcction << ", Asistencias: " << estudiantes[i].asists << endl;
	}
}

bool C_Asistencia::buscarEst(int ciEst)
{
	for (int i = 0; i < allEst; i++) {
		if (estudiantes[i].ci == ciEst) 
		{
			if (estudiantes[i].ci == ciEst)
			{
				cout << "Estudiante encontrado:" << endl;
				cout << "CU: " << estudiantes[i].ci << endl;
				cout << "Nombre: " << estudiantes[i].name << endl;
				cout << "Apellido: " << estudiantes[i].surnames << endl;
				cout << "Edad: " << estudiantes[i].age << endl;
				cout << "Dirección: " << estudiantes[i].direcction << endl;
				cout << "Asistencias: " << estudiantes[i].asists << endl;
				return true;
			}
		}
		else 
		{
			cout << "Estudiante con CU " << ciEst << " no encontrado." << endl;
			return false;
		}
	}
}

bool C_Asistencia::eliminarEst(int ciEst)
{
	for (int i = 0; i < allEst; i++) {
		if (estudiantes[i].ci == ciEst) 
		{
			for (int j = i; j < allEst - 1; j++) 
			{
				//Se utiliza para desplazar los elemntos del arreglo hasta eliminarlos
				estudiantes[j] = estudiantes[j + 1];
			}
			allEst--;
			cout << "Estudiante eliminado" << endl;
			return true;
		}
	}
}

void C_Asistencia::insertarAsist(int ciEst)
{
	for (int i = 0; i < allEst; i++) 
	{
		if (estudiantes[i].ci == ciEst) 
		{
			estudiantes[i].asists++;
			cout << "Asistencia registrada" << endl;
			return;
		}
	}

	cout << "Estudiante con CU" << ciEst << " no encontrado." << endl;
}

void C_Asistencia::mostarHabi()
{
	cout << "Lista de Estuidantes Habilitados: " << endl;
	for (int i = 0; i < allEst; i++) 
	{
		if (estudiantes[i].asists >15) 
		{
			cout << "Estudiante habilitado: "<<i+1<<") " << estudiantes[i].name << " " << estudiantes[i].surnames << endl;
		}
	}
}

void C_Asistencia::asistenciasEst(int ciEst)
{
	for (int i = 0; i < allEst; i++) {
		if (estudiantes[i].ci == ciEst)
		{
			cout << "El estudiante: " << estudiantes[i].name << " " << estudiantes[i].surnames << "tiene " << estudiantes[i].asists<<endl;
		}
	}
}
