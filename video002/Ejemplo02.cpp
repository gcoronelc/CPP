// Lectura de datos

#include <iostream>

using namespace std;

int main(){

	// Variables
	int n1, n2, suma, producto;
	
	// Datos
	cout << "Ingrese el valor de n1: ";
	cin >> n1;
	cout << "Ingrese el valor de n2: ";
	cin >> n2;
	
	// Proceso
	suma = n1 + n2;
	producto = n1 * n2;
	
	// Reporte
	cout << "N�mero 1: " << n1 << endl;
	cout << "N�mero 2: " << n2 << endl;
	cout << "Suma: " << suma << endl;
	cout << "Producto: " << producto << endl;
	
	return 0;
}
