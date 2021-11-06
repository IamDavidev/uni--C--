// programa ejercio 1

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "ingrese su calificacion final para determinar si es aprobaroria ";
    cin >> num;
    if (num >= 7)
    {
        cout << "esta aprobado felicidades!!!✔🎉🎉✨";
    }
    if(num < 7)
    {
        cout << "esta reprobado, estudia mas!!!";
    }
    return 0;
}