// determinar el perimetro de un triangulo con switch

#include <iostream>
using namespace std;
int main()
{
    int tipo;
    float lado1, lado2, lado3, perimetro;
    cout << "Ingrese el tipo de Triangulo: 1)Escaleno 2)Isoseles 3)Equilatero : ";
    cin >> tipo;
    switch (tipo)
    {
    case 1 /* constant-expression */:
        /* code */
        cout << "Ingrese el lado 1: ";
        cin >> lado1;
        cout << "Ingrese el lado 2: ";
        cin >> lado2;
        cout << "Ingrese el lado 3: ";
        cin >> lado3;
        perimetro = lado1 + lado2 + lado3;
        break;
    case 2:
        cout << "Ingrese el lado 1: ";
        cin >> lado1;
        cout << "Ingrese el lado 2: ";
        cin >> lado2;
        perimetro = 2 * lado1 + lado2;
        break;
    case 3:
        cout << "Ingrese el lado 1: ";
        cin >> lado1;
        perimetro = 3 * lado1;
        break;
    default:
        break;
    }
    cout << "El perimetro es: " << perimetro << endl;
}