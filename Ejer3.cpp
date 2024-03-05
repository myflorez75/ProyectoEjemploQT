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
        if(mes < 1 && dia > 31) {
            cout << dia <<"/"<< mes << " es una fecha invalida.";
        }
        if(mes == 1 && dia <= 31) {
            cout << dia <<"/"<< mes << " es una fecha valida.";
        }
        if(mes == 2 && dia <= 28) {
            cout << dia <<"/"<< mes <<" es una fecha valida." ;
        }
        else if (mes == 2 && dia == 29) {
            cout << dia <<"/"<< mes <<" es valida en bisiesto." ;
        }
        if(mes == 3 && dia <= 31) {
            cout << dia <<"/"<< mes<< " es una fecha valida.";
        }
        if(mes == 4 && dia <= 30) {
            cout << dia <<"/"<< mes << " es una fecha valida.";
        }
        if(mes == 5 && dia <= 31) {
            cout << dia <<"/"<< mes << " es una fecha valida.";
        }
        if(mes == 6 && dia <= 30) {
            cout << dia <<"/"<< mes << " es una fecha valida.";
        }
        if(mes == 7 && dia <= 31) {
            cout << dia <<"/"<< mes << " es una fecha valida.";
        }
        if(mes == 8 && mes <= 31) {
            cout << dia <<"/"<< mes << " es una fecha valida.";
        }
        if(mes == 9 && mes <= 30) {
            cout << dia <<"/"<< mes << " es una fecha valida.";
        }
        if(mes == 10 && mes <= 31) {
            cout << dia <<"/"<< mes << " es una fecha valida.";
        }
        if(mes == 11 && mes <= 30) {
            cout << dia <<"/"<< mes << " es una fecha valida.";
        }
        if(mes == 12 && mes <= 31) {
            cout << dia <<"/"<< mes << " es una fecha valida.";
        }
        else {
            cout << dia <<"/"<< mes <<" es una fecha invalida" ;
        }

    }
    else {
        cout << dia <<"/"<< mes <<" es una fecha invalida" ;
    }
    return 0;

}
