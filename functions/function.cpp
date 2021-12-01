// programa que calcula el area de direntes figuras geometricas usando funciones ;

#include <iostream>
#include <math.h>
using namespace std;

void AreaCuadrado(float lado);	// funcion sin valor de retorno  con paramentros
void AreaTriangulo();			// sin parametros
float AreaCirculo(float radio); // funcion con valor de retorno con parametros
float AreaRectangulo();			// sin parametros

int main()
{
	char opcion;
	float lado, radio, area;
	cout << "Menu de figuras geometricas : " << endl;
	cout << "\n a. Cuadrado" << endl;
	cout << "\n b. Triangulo" << endl;
	cout << "\n c. Circulo" << endl;
	cout << "\n d. Rectangulo" << endl;
	cout << "\n Ingrese una opcion : ";
	cin >> opcion;
	switch (opcion)
	{
	case 'a':
		cout << "\n Ingrese el lado del cuadrado : ";
		cin >> lado;
		AreaCuadrado(lado);
		break;
	case 'b':
		AreaTriangulo();
		break;
	case 'c':
		cout << "\n Ingrese el radio del circulo : ";
		cin >> radio ;
		area = AreaCirculo(radio);
		break;
	case 'd':
		AreaRectangulo();
		break;
	default:
		cout << "\n Opcion no valida ";
		break;
	}
	return 0;
}


void AreaCuadrado(float lado)
{
	float area;
	area = lado * lado;
	cout << "\n El area del cuadrado es : " << area << endl;
}
