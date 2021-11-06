// ejercio 2

#include <iostream>
using namespace std;

int main()
{
    int edad;
    cout << "ingrese su edad para determinar la etapa en la que se encuentra";
    cin >> edad;
    if (edad >= 0 && edad <= 3)
    {
        cout << "bebe";
    }
    if (edad >= 4 && edad <= 12)
    {
        cout << "niñ@";
    }
    if (edad >= 13 && edad <= 18)
    {
        cout << "adolescente";
    }
    if (edad >= 18)
    {
        cout << "adulto";
    }

    return 0;
}