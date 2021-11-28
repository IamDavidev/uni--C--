//  Escribir un programa que encuentre el primer número primo introducido por teclado.


#include <iostream>
using namespace std;

int main(){
     int numero;
     int i = 0;
     do {
        cout << "Introduce un numero: ";
        cin >> numero;
        if (numero <= 2) {
            cout << "El numero debe ser mayor que 2" << endl;
        }
        if (numero % 2 != 0) {
            cout << "El numero es primo" << endl;
           i = 1 ; 
        }
     }while (i == 0);
}