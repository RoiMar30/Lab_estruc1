// Lab 1 Roi Martinez.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "C_Asistencia.h"

using namespace std;

int main()
{
	C_Asistencia Maestro;
	int op;
	do {
		cout << "Datos del Profesor" << endl;
		cout << "1. Introducir Datos De Estudiantes" << endl;
		cout << "2. Mostrar los estudiantes" << endl;
		cout << "3. Buscar un estudiante" << endl;
		cout << "4. Eliminar un determinado Estudiante" << endl;
		cout << "5. Insertar asistencia para un estudiante" << endl;
		cout << "6. Mostrar los estudiantes habilitados para el examen" << endl;
		cout << "7. Mostrar todas las asistencias de un estudiante" << endl;
		cout << "8. Salir" << endl;
		cout << "Opcion(1-8): ";
		cin >> op;

		switch (op) {
		case 1: {
			int ci, edad;
			string nombre, apellido, direccion;
			cout << "Ingrese CI: ";
			cin >> ci;
			cout << "Ingrese Nombre: ";
			cin >> nombre;
			cout << "Ingrese Apellido: ";
			cin >> apellido;
			cout << "Ingrese Edad: ";
			cin >> edad;
			cout << "Ingrese Direccion: ";
			cin >> direccion;
			Maestro.datosEst(ci, nombre, apellido, edad, direccion);
			break;
		}
		case 2: {
			Maestro.mostrarListaEstudiantes();
			break;
		}
		case 3: {
			int ciEstudiante;
			cout << "Ingrese CI del Estudiante: ";
			cin >> ciEstudiante;
			Maestro.buscarEst(ciEstudiante);
			break;
		}
		case 4: {
			int ciEstudiante;
			cout << "Ingrese CI del Estudiante: ";
			cin >> ciEstudiante;
			Maestro.eliminarEst(ciEstudiante);
			break;
		}
		case 5: {
			int ciEstudiante;
			cout << "Ingrese CI del Estudiante: ";
			cin >> ciEstudiante;
			Maestro.insertarAsist(ciEstudiante);
			break;
		}
		case 6:
			Maestro.mostarHabi();
			break;
		case 7: 
			int ciEstudiante;
			cout << "Ingrese CI del Estudiante: ";
			cin >> ciEstudiante;
			Maestro.asistenciasEst(ciEstudiante);
			break;
		default:
			cout << "Opción no válida. Inténtelo de nuevo." << endl;
		}
		cout << "Presione Enter para continuar";
		cin.ignore();
		cin.get();
	} while (op != 8);

	return 0;
}
