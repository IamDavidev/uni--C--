// progrma que calcula la diagonal de una matriz

#include <iostream>
using namespace std;

//funciones
void Imatriz(float mat[][5]);
void MatrizFilas(float mat[][5]);
void MatrizColumnas(float mat[][5]);
void MatrizDiagonal(float mat[][5]);

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
            Imatriz(mat);
            break;
        case 2:
            MatrizFilas(mat);
            break;
        case 3:

            MatrizColumnas(mat);
            break;
        case 4:
            MatrizDiagonal(mat);
            break;
        case 5:
            cout << "Gracias por usar el programa \n";
            break;
        default:
            cout << "Opcion no valida  \n";
        }

    } while (op != 5);
}

void Imatriz(float mat[5][5])
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            cout << "Ingrese el valor de la posicion [" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }
    
}

void MatrizDiagonal(float mat[][5])
{
    float suma = 0;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            if (i == j)
            {
                suma = suma + mat[i][j];
            }
        }
    }
    cout << "La suma de la diagonal es: " << suma << endl;
}
void MatrizColumnas(float mat[][5])
{
    float suma = 0;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            suma = suma + mat[j][i];
        }
        cout << "La suma de la columna " << i << " es: " << suma << endl;
        suma = 0;
    }
}
void MatrizFilas(float mat[][5])
{
    float suma = 0;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            suma = suma + mat[i][j];
        }
        cout << "La suma de la fila " << i << " es: " << suma << endl;
        suma = 0;
    }
}
