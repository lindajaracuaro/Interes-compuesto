// Interes compuesto usando for developed by Linda P�rez on May 2020
// 4.6 Interes compuesto utilizando for.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

float p = 1000, a , r = .05;

int main()
{
    cout << "A�o \t" << "Monto del dep�sito" << endl;

    for (int n = 1 ; n<=10 ; n++)
    {   
        a = p*pow( 1 + r , n );
        cout << n << "\t" << a << endl;
    }
    
    return 0 ;
}
