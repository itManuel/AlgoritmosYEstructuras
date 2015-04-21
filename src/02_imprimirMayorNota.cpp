//============================================================================
// Name        : 02_imprimirMayorNota.cpp
// Author      : Manuel Fernando Aller
// Version     :
// Copyright   : (c) Manuel Fernando Aller
// Description : imprimir el que tenga mayor nota
//============================================================================
#include <iostream>
using namespace std;

struct Alumno {
	int nota;
	string nombre;
	string apellido;
	int legajo;
};
void MostrarAlumno(Alumno alumno){
	cout << "Nombre y apellido: " << alumno.nombre << " " << alumno.apellido << endl;
	cout << "Legajo: " << alumno.legajo << endl;
	cout << "Nota: " << alumno.nota << endl;
}
void IngresarAlumno(Alumno &alumno){
	cout << "Ingrese nota: ";
	cin >> alumno.nota;
	if (alumno.nota != 0) {
		cout << "Ingrese el nombre: ";
		cin >> alumno.nombre;
		cout << "Ingrese el apellido: ";
		cin >> alumno.apellido;
		cout << "Ingrese el legajo: ";
		cin >> alumno.legajo;
	}
}
int main() {
Alumno alumno;
Alumno mayor;
bool hayDatos;

hayDatos=false;

IngresarAlumno(alumno);
while (alumno.nota!=0){
	if(!hayDatos||alumno.nota>mayor.nota){
		mayor = alumno;
		hayDatos=true;
	}
	IngresarAlumno(alumno);
}
if(hayDatos){
	MostrarAlumno(mayor);
} else {
	cout << "No hay valores" << endl;
}
}
