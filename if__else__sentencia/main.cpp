// sentecia if else 


#include <iostream>
using namespace std;

int main (){

    float precio_traje;
    cout << "Ingrese el precio del traje: ";
    cin >> precio_traje;
    if (precio_traje > 2500){
        precio_traje = precio_traje - (precio_traje * 0.15);
    }else{
        precio_traje = precio_traje - (precio_traje * 0.08);
    }
    cout << "El precio final del traje es: " << precio_traje << endl;
    return 0;
}


