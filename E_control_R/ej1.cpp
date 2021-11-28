// cociente y resto de una division e imprimir el resultado


#include <iostream>
using namespace std;

int main(){

    int m,n; 
    cout<< "Introduce el M : ";
    cin>>m;
    cout << "Introduce el N : ";
    cin>>n;
    for(int i=1; m>n; i++){
        cout << "\n" << m << " - " << n << " = "  << m-n  << " c = "<< i;;
        m = m - n;        
    }

return 0;

}