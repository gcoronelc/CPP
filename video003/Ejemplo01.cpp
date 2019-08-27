#include <iostream>

using namespace std;

int main(){
	
	// Variables
	int n1, n2, s, r, m, d, resto;
	
	// Datos
	n1 = 20;
	n2 = 6;
	
	// Operaciones
	s = n1 + n2;
	r = n1 - n2;
	m = n1 * n2;
	d = n1 / n2;
	resto = n1 % n2;
	
	// Reporte
	cout << "N1 = " << n1 << endl;
	cout << "N2 = " << n2 << endl;
	cout << "S = " << s << endl;
	cout << "R = " << r << endl;
	cout << "M = " << m << endl;
	cout << "D = " << d << endl;
	cout << "Resto = " << resto << endl;
	
	return 0;
}
