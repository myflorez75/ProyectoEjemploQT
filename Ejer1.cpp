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
    else if (caracter == 'b'|| caracter == 'c' || caracter == 'd' || caracter == 'f' || caracter == 'g'
             || caracter == 'h'|| caracter == 'j' || caracter == 'k' || caracter == 'l' || caracter == 'm'|| caracter == 'p' || caracter == 'q' || caracter == 'n' || caracter == 'r'|| caracter == 's'
             || caracter == 't' || caracter == 'v' || caracter == 'w' || caracter == 'x'
             || caracter == 'y' || caracter == 'z'
             || caracter == 'B'|| caracter == 'C' || caracter == 'D' || caracter == 'F' || caracter == 'G'
             || caracter == 'H'|| caracter == 'J' || caracter == 'K' || caracter == 'L' || caracter == 'M'|| caracter == 'P' || caracter == 'Q' || caracter == 'N' || caracter == 'R'|| caracter == 'S'
             ||caracter == 'T' || caracter == 'V' || caracter == 'W' || caracter == 'X'
             || caracter == 'Y' || caracter == 'Z'){
        cout << caracter << " es una consonante"<< endl;
    }
    else{
        cout << caracter << " no es una letra"<< endl;
    }

    return 0;
}
