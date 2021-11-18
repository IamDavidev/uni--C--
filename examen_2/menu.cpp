// area y perimetro de un trinagulo, un cuadrado y un circulo con un menu para elegir la figura

#include <iostream>
using namespace std;
int main()
{
    int operacion;
    do
    {
        int opcion;
        float lado1, lado2, lado3, lado4, radio, diametro, area, perimetro;
        cout << "Seleccione su figura";
        cout << "\n1. Triangulo";
        cout << "\n2. Cuadrado";
        cout << "\n3. Circulo";
        cout << ":  ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            cout << "Ingrese el lado 1 : ";
            cin >> lado1;
            cout << "Ingrese el lado 2 : ";
            cin >> lado2;
            cout << "Ingrese el lado 3 : ";
            cin >> lado3;
            if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0)
            {
                cout << "Favor de ingresar valores validos";
            }
            else
            {
                area = (lado1 * lado2) / 2;
                perimetro = lado1 + lado2 + lado3;
                cout << "El area del triangulo es : " << area << endl;
                cout << "El perimetro del triangulo es : " << perimetro << endl;
            }

            break;
        case 2:
            cout << "Ingrese el lado 1";
            cin >> lado1;
            if (lado1 <= 0)
            {
                cout << "Favor de ingresar valores validos";
            }
            else
            {
                cout << "El area del cuadrado es : " << lado1 * lado1;
                cout << "El perimetro del cuadrado es : " << lado1 * 4;
            }
            break;
        case 3:
            cout << "Ingrese el radio";
            cin >> radio;
            cout << "Ingrese el diametro";
            cin >> diametro;
            if (diametro <= 0 || radio <= 0)
            {
                cout << "Favor de ingresar valores validos";
            }
            else
            {
                cout << "El area del circulo es : " << 3.14 * radio * radio;
                cout << "El perimetro del circulo es : " << 2 * 3.14 * radio;
            }

            break;
        default:
            cout << "Opcion no valida";
        }
        cout << "\nDesea hacer otra operacion ? (1. Si 2. No)";
        cin >> operacion;
    } while (operacion == 1);
    return 0;
}
