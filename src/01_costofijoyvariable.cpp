//============================================================================
// Name        : AlgoritmosYEstructuras.cpp
// Author      : Manuel Fernando Aller
// Version     :
// Copyright   : (c) Manuel Fernando Aller
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double CostoFijo, CostoVariable, CostoTotal;
	cout << "Ingrese costo fijo: ";
	cin >> CostoFijo;
	cout << "Ingrese costo variable: ";
	cin >> CostoVariable;
	CostoTotal = CostoFijo + CostoVariable;
	cout << "El Costo Total es: " << CostoTotal;
	return 0;
}
