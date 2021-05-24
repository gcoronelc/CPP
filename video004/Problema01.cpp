#include <iostream>
using namespace std;
int main(){
	
	// Variables
	int nota1, nota2, nota3, promedio;
	string mensaje;

	// Lectura
	cout << "LECTURA DE DATOS" << endl;
	cout << "Nota 1: "; cin >> nota1;
	cout << "Nota 2: "; cin >> nota2;
	cout << "Nota 3: "; cin >> nota3;

	// Proceso
	promedio = ( nota1 + nota2 + nota3 ) / 3;
	mensaje = ( promedio >= 11 )?"Aprobado":"Desaprobado";

	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "Promedio: " << promedio << endl;
	cout << "Condicion: " << mensaje << endl;
	cout << endl;

	system("pause");
	return 0;
}
