// progrma que calcula la diagonal de una matriz

#include <iostream>
using namespace std;

//funcion main
main()
{
    int op;
    float mat[5][5];
    float suma = 0;
    do
    {
        cout << "Menu de opciones de matrizes \n";
        cout << "1. Ingresar matriz \n";
        cout << "2. calcular de la suma de cada una de las filas  \n";
        cout << "3. calcular de la suma de cada una de las columnas  \n";
        cout << "4. Calcular diagonal \n";
        cout << "5. Salir \n";
        cout << "Ingrese una opcion: ";
        cin >> op;
        switch (op)
        {
        case 1:
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    cout << "Ingrese la matriz"<< j << i << ": \n ";
                    cin >> mat[i][j];
                }
            }
            break;
        default:
            cout << "Opcion no valida  \n";
        }

    } while (op != 5);
}