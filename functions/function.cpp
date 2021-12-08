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
	float lado, lado2, lado3, lado4, radio, area;
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
		cin >> radio;
		area = AreaCirculo(radio);
		cout << "\n El area del circulo es : " << area << endl;
		break;
	case 'd':
		area = AreaRectangulo();
		cout << "\n El area del rectangulo es : " << area << endl;
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

void AreaTriangulo()
{
	float base, altura, area;
	cout << "\n Ingrese la base del triangulo : ";
	cin >> base;
	cout << "\n Ingrese la altura del triangulo : ";
	cin >> altura;
	area = (base * altura) / 2;
	cout << "\n El area del triangulo es : " << area << endl;
}

float AreaCirculo(float radio)
{
	float area;
	area = 3.1416 * radio * radio;
	// cout << "\n El area del circulo es : " << area << endl;
	return area;
}

float AreaRectangulo()
{
	float base;
	float altura;
	float area;
	cout << "\n Ingrese la base del rectangulo : ";
	cin >> base;
	cout << "\n Ingrese la altura del rectangulo : ";
	cin >> altura;
	area = base * altura;
	return area;
}