#include <iostream>
using namespace std;

int main(){
	
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int tipoProducto, cantidad, porcDscto;
	float precio, importe, valorDscto, valorVenta;
	
	// Lectura
	cout << "LECTURA DE DATOS" << endl;
	cout << "-----------------------------" << endl;
	cout << "Tipo de producto: ";      cin >> tipoProducto;
	cout << "Precio del producto: ";   cin >> precio;
	cout << "Cantidad de productos: "; cin >> cantidad;
	
	// Proceso
	porcDscto = 0;
	// Descuento para tipo 1
	porcDscto = (tipoProducto == 1 && cantidad >= 3 && cantidad <= 8)?3:porcDscto;
	porcDscto = (tipoProducto == 1 && cantidad >= 9 && cantidad <= 14)?5:porcDscto;
	porcDscto = (tipoProducto == 1 && cantidad >= 15)?7:porcDscto;
	// Descuento para tipo 2
	porcDscto = (tipoProducto == 2 && cantidad >= 3 && cantidad <= 8)?5:porcDscto;
	porcDscto = (tipoProducto == 2 && cantidad >= 9 && cantidad <= 14)?7:porcDscto;
	porcDscto = (tipoProducto == 2 && cantidad >= 15)?9:porcDscto;
	// Calcular la venta
	importe = precio * cantidad;
	valorDscto = importe * porcDscto / 100;
	valorVenta = importe - valorDscto;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "--------------------------------------------" << endl;
	cout << "Importe de la venta: " << importe << endl;
	cout << "Porcentaje del descuento: " << porcDscto << "%" << endl;
	cout << "Valor del descuento: " << valorDscto << endl;
	cout << "Valor de la venta: " << valorVenta << endl;
	
	system("pause");
	return 0;
	
}
