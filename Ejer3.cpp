#include <iostream>

using namespace std;

int Ejercicio3(){

    int mes, dia;
    cout << "FECHA DE AÑO" << endl;
    cout << "ingrese mes: " << endl;
    cin >>mes;
    cout << "ingrese dia: " << endl;
    cin >> dia;

    if(mes < 12){
        if(mes == 1 && mes <= 31) {
            cout << dia <<"/"<< mes << " es una fecha valida.";
        }
        if(mes == 2 && mes <= 28) {
            cout << dia <<"/"<< mes <<" es una fecha valida." ;
            if(dia == 29) {
                cout << dia <<"/"<< mes <<" es valida en bisiesto." ;
            }
        }

        if(mes == 3 && mes <= 31) {
            cout << dia <<"/"<< mes<< " es una fecha valida.";
        }
        if(mes == 4 && mes <= 30) {
            cout << dia <<"/"<< mes << " es una fecha valida.";
        }

    }
    else {
        cout << mes << " es un mes invalido" << endl;
    }

}
