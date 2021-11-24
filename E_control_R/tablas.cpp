// tabla de multiplicar con while , do while y for

#include <iostream>
using namespace std;

// int main(){
//     int numero;
//     cout<< "Ingrese un Numero ";
//     cin >> numero;
//     for(int i=1; i<=10; i++){
//         cout<< numero << "  x  " << i << " = " << numero*i << endl;
//     };

//     return 0;
// }

// int main(){
//     int num;
//     cout<< "Ingrese un Numero ";
//     cin >> num;
//     int i=1;
//     while(i<=10){
//         cout<< num << "  x  " << i << " = " << num*i << endl;
//         i++;
//     };
// }


int main(){
    int num;
    cout<< "Ingrese un Numero ";
    cin >> num;
    int i=1;
    do{
        cout<< num << "  x  " << i << " = " << num*i << endl;
        i++;
    }while(i<=10);
}