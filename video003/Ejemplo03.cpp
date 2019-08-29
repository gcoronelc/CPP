// Precedencia de operadores

#include <iostream>

using namespace std;

int main(){
	
	int a, b, c, d, e;
	
	// Datos
	a = 5;
	b = 6;
	c = 10;
	
	// Proceso
	d = a * b + c; // 5*6 + 10
	e = a * ( b + c ); // 5*16
	
	// Reporte
	cout << "d = " << d << endl;
	cout << "e = " << e << endl;
	
	return 0;
}
