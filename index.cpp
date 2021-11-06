// programming language: C++

#include <iostream>
using namespace std;
main()
{
    int num1, num2;
    cout << "Ingrese el numero 1";
    cin >> num1;
    cout << "Ingrese el numero 2";
    cin >> num2;
    if (num1 % num2 == 0)
    {
        cout << num1 << " es Divisible entre " << num1;
    }
    else
    {
        cout << "No hay divisibilidad entre lo numeros que se pasaron ";
    }
    return 0;
}

