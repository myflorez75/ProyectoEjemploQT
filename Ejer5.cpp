#include <iostream>

using namespace std;

int Ejercicio5(){
    int num;
    cout <<" Escriba un numero entero impar: ";
    cin>> num;

    while (num %2==0){
        cout <<"Escriba un numero impar: ";
               cin >> num;
    }


}
