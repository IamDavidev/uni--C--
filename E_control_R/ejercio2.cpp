//  Escribir un programa que encuentre el primer número primo introducido por teclado.

#include <iostream>
using namespace std;
// int main()
// {
//     int numero, salir;
//     int contador = 0;

//         cout << "Introduce un numero: ";
//         cin >> numero;
//         for (int i = 1; i <= numero; i++)
//         {
//             if (numero % i == 0)
//             {
//                 contador++;
//             }
//         }
//         if (contador == 2)
//         {
//             cout << "El numero " << numero << " es primo";
//         }
//         else
//         {
//             cout << "El numero " << numero << " no es primo";
//             salir = 1;
//         }
//     return 0;
// }

int main()
{
    int numero;
    cout << "Introduce un numero: ";
    cin >> numero;
    int contador = 0;
    int i = 1;
    do
    {
        if (numero % i == 0)
        {
            contador++;
        }
        i++;
    } while (i <= numero);

    if (contador == 2)
    {
        cout << "El numero " << numero << " es primo";
    }
    else
    {
        cout << "El numero " << numero << " no es primo";
    }
    return 0;
}
