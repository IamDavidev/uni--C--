// Realizar un programa que determine cuál de tres cantidades proporcionadas es la  mayor. utilizando if anindados

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Ingrese la cantidad 1: ";
    cin >> a;
    cout << "Ingrese la cantidad 2";
    cin >> b;
    cout << "Ingrese la cantidad 3";
    cin >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "La cantidad 1 es la mayor";
        }
    }
    if (b > a)
    {
        if (b > c)
        {
            cout << "La cantidad 2 es la mayor";
        }
    }
    if (c > a)
    {
        if (c > b)
        {
            cout << "La cantidad 3 es la mayor";
        }
    }
    if (a == b && b == c)
    {
        cout << "Las tres cantidades son iguales";
    }
}