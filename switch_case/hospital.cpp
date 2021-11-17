// hospital
#include <iostream>
using namespace std;

int main()
{
    int tipoEnfermedad;
    float edad, precioTotal;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese el tipo de enfermedad: 1)comun 2)Nivel basico 3)Nivel Medio 4)Nivel Alto : ";
    cin >> tipoEnfermedad;
    switch (tipoEnfermedad)
    {
    case 1: // tipoEnfermedad = 1
        precioTotal = 275.80;
        break;
    case 2:
        ;
        break;
    case 3:
        precioTotal = 567.00;
        break;
    case 4:
        precioTotal = 955.10;
        break;
    default:
        cout << "Ingrese un numero valido";
        break;
    }

    if (edad >= 14 && edad <= 22)
    {
        precioTotal = precioTotal + (precioTotal * 0.15);
    }
    cout << "El precio total :" << precioTotal << endl;
}
