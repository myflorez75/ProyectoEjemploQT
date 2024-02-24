#include <iostream>

using namespace std;

int Ejercicio1(){

    char caracter;
    cout << "Ingrese un caracter:" << endl;
    cin >>caracter;

    if(caracter == 'a'|| caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u'
        || caracter == 'A'|| caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U'){
        cout << caracter << " es una vocal"<< endl;
    }
    else{
        cout << caracter << " es una consonante"<< endl;
    }

    return 0;
}
