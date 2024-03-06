#include <iostream>

using namespace std;

int Ejercicio4(){


    int ent1,int1,hora1,min1,ent2,int2,hora2,min2,hora,min,resul;

    cout << "Escriba primer entero: " << endl;
    cin>> ent1;
    cout << "Escribir segundo entero: " << endl;
    cin >> ent2;
    int1 = ent1;
    hora1 = int1/100;
    min1 = int1 %= 100;

    int2 = ent2;
    hora2 = int2/100;
    min2 = int2 %= 100;

    if (hora2 >= 24 ||min2 >= 60){
        cout << ent2 <<" es un tiempo invalido." << endl;
    }
    if (hora1 >= 24 ||min1 >= 60){
        cout << ent1 <<" es un tiempo invalido." << endl;
    }
    else {

        cout << ent1 << " es valido." << endl;
    }

    hora1 = hora1 * 100;
    hora2 = hora2 * 100;
    hora = hora2 - hora1;
    min = min2 - min1;

    if(min <0){
        min = min*(-1);
    }
    if(min >0){
        min = min + 40;
    }
    resul = hora - min;

    cout << resul <<" resultado." <<endl;








}
