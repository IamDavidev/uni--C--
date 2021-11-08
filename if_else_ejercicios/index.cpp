// Dado como dato un número entero e indicar si dicho número es par o impar, positivo o negativo.
#include <iostream>
using namespace std;
int main (){
   int numero;
   cout << "ingrese un numero ";
   cin >> numero;
   if (numero % 2 == 0){
      cout << "el numero es par";
   }
   else{
      cout << "el numero es impar";
   }
    if (numero > 0){
        cout << " el numero es positivo";
    }
    else{
        cout << " el numero es negativo";
    }
}

