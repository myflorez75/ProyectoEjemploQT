#include <iostream>

using namespace std;

int Ejercicio2(){

    int caracter, billetes;
    cout << "Ingrese un valor: "<< endl;
    cin >> caracter;

    billetes = caracter/50000;
    caracter %= 50000;
    cout << "Billetes de 50mil: " <<billetes<< endl;

    billetes = caracter/20000;
    caracter %= 20000;
    cout << "Billetes de 20mil: " <<billetes<< endl;

    billetes = caracter/10000;
    caracter %= 10000;
    cout << "Billetes de 10mil: " <<billetes<< endl;

    billetes = caracter/5000;
    caracter %= 50000;
    cout << "Billetes de 5mil: "<< billetes<< endl;

    billetes = caracter/2000;
    caracter %= 2000;
    cout << "Billetes de 2mil: " << billetes << endl;

    billetes = caracter/1000;
    caracter %= 1000;
    cout << "Billetes de 1mil: " << billetes << endl;

    billetes = caracter/500;
    caracter %= 500;
    cout << "Billetes de 500p; " << billetes << endl;

    billetes = caracter/200;
    caracter %= 200;
    cout << "Billetes de 200p: " <<billetes<< endl;

    billetes = caracter/100;
    caracter %= 100;
    cout << "Billetes de 100p: " <<billetes<< endl;

    billetes = caracter/50;
    caracter %= 50;
    cout << "Billetes de 50p: " <<billetes<< endl;

    billetes = caracter;
    cout << "Residuo: " << billetes<< endl;




    return 0;
}
