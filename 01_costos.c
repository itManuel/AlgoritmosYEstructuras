# include <stdio>
using namespaces std;

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
