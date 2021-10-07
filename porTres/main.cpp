//
//  PorTres.cpp
//  Programacion
//
//  Created by Carlos Botella Navarro on 23/9/21.
//

/*
 --------------------------------------------------------------
 Datos de entrada: a : R
 Datos de salida: R
 Devolver a·3
 --------------------------------------------------------------
 */

#include <iostream>
using namespace std;

double porTres(double num){
    num = num*3;
    cout << num << endl;
    return num;
}

int main(){
    int num;
    cout << "Elige un número: ";
    cin >> num;
    porTres(num);
}

