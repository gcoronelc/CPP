#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	double x1, y1, x2, y2, d;
	
	// Lectura
	cout << "LECTURA DE DATOS" << endl;
	cout << "============================" << endl;
	cout << "X1: "; cin >> x1;
	cout << "Y1: "; cin >> y1;
	cout << "X2: "; cin >> x2;
	cout << "Y2: "; cin >> y2;
	
	// Proceso
	d = sqrt( pow(x2-x1,2) + pow(y2-y1,2) );
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "============================" << endl;
	cout << "La distancia d es: " << d << endl;
	cout << endl;
	
	system("pause");
	return 0;
	
}

