// Suma de "n" primeros números enteros

#include <iostream>

using namespace std;

int main(){

	// Variables
	int n, suma;
	
	// Datos
	cout << "Ingrese el valor de N: ";
	cin >> n;
	
	// Proceso
	suma = n * ( n + 1) / 2;
	
	// Reporte
	cout << "Valor de N: " << n << endl;
	cout << "Suma: " << suma << endl;
	
	return 0;
}
