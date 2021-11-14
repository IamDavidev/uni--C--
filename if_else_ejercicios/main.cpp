// ejercio 2 promedio de calificaciones

#include <iostream>
using namespace std;
int main()
{
    int cal1, cal2, cal3, cal4, cal5, promedio;
    int matricula;
    cout << "ingrese la matricula del alumno: ";
    cin >> matricula;
    cout << "ingrese calificacion 1: ";
    cin >> cal1;
    cout << "ingrese calificacion 2: ";
    cin >> cal2;
    cout << "ingrese calificacion 3: ";
    cin >> cal3;
    cout << "ingrese calificacion 4: ";
    cin >> cal4;
    cout << "ingrese calificacion 5: ";
    cin >> cal5;
    promedio = (cal1 + cal2 + cal3 + cal4 + cal5) / 5;
    if (promedio >= 7)
    {
        cout << "el alumno con matricula " << matricula << " aprobo con un promedio de " << promedio + 1 << endl;
    }
    else
    {
        cout << "el alumno con matricula " << matricula << " reprobo con un promedio de " << promedio << "por lo tanto vas a presentar exame global" << endl;
    }
    return 0;
    
}