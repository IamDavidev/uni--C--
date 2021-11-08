// suma , multiplicacion , resta , divicion con switch 

#include <iostream>
using namespace std;
int main (){
    int num1, num2, suma, multiplicacion, resta, divicion;
    cout << "ingrese el primer numero" << endl;
    cin >> num1;
    cout << "ingrese el segundo numero" << endl;
    cin >> num2;
    switch (num1){
        case 1:
            suma = num1 + num2;
            cout << "la suma es: " << suma << endl;
            break;
        case 2:
            multiplicacion = num1 * num2;
            cout << "la multiplicacion es: " << multiplicacion << endl;
            break;
        case 3:
            resta = num1 - num2;
            cout << "la resta es: " << resta << endl;
            break;
        case 4:
            divicion = num1 / num2;
            cout << "la divicion es: " << divicion << endl;
            break;
        default:
            cout << "no se puede realizar la operacion" << endl;
    }
    return 0;
}