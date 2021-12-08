// arbol binario

#include <iostream>
using namespace std;

int main()
{
    int opcion1, opcion2, opcion3, opcion4, opcion5;
    cout << "\n Introducir Numeros (1 0 2 ) ";
    cout << "\n Quiero Escuchar musica ";
    cout << "\n  1 -> si  o 2 -> no : ";
    cin >> opcion1;
    if (opcion1 == 1)
    {
        cout << " \n tengo Internet";
        cout << " \n  1 -> si  o 2 -> no : ";
        cin >> opcion2;
        if (opcion2 == 1)
        {
            cout << "\n Escucho musica al azar";
            cout << "\n  1 -> si  o 2 -> no : ";
            cin >> opcion3;
            if (opcion3 == 1)
            {
                cout << " \n Me gusta la cancion";
                cout << "\n  1 -> si  o 2 -> no ::";
                cin >> opcion4;
                if (opcion4 == 1)
                {
                    cout << "\n Escuchar la musica";
                }
                else
                {
                    cout << "\n No me gusta la cancion pongo siguiente";
                }
            }
            else
            {
                cout << "\n Tengo Lista de reproduccion";
                cout << "\n  1 -> si  o 2 -> no : ";
                cin >> opcion5;
                if (opcion5 == 1)
                {
                    cout << "\n Escucho musica de la lista";
                }
                else
                {
                    cout << "\n cd Escucho musica al azar";
                }
            }
        }
        else
        {
            cout << "\n No tengo internet";
        }
    }
    else
    {
        cout << "no puedo escuchar musica";
    }

    return 0;
}