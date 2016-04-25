/****************************************************************************************

 Archivo: 4Numeros.cpp
 Fecha: 9 de Febrero del 2015.
 Author: Luis Alfonso Rojo Sanchez (A01113049)

 Descripcion:
    Este programa toma cuatro numeros y determina el numero mayor de ellos.
 Análisis:
    * Entradas:
        Cuatro valores
    * Procesos:
        Funcion que determina el valor mayor de cuatro valores insertados
    * Salidas:
        Despliega el valor mayor de 4 numeros.
 Diseño:
    * Algoritmo:
        Se declara la funcion
        {

        Declaración de dNumeroMayor

        if de dA
        Declaración de dA como dNumeroMAyor
        Se despliega el número mayor

        if de dB
        Declaración de dA como dNumeroMAyor
        Se despliega el número mayor

        if de dC
        Declaración de dA como dNumeroMAyor
        Se despliega el número mayor

        if de dD
        Declaración de dA como dNumeroMAyor
        Se despliega el número mayor

        else que menciona que todos los numeros son iguales
        }

        Declaración de variables
        Leer valores entrada
        Se utiliza la función

***************************************************************************************/
#include <iostream>

using namespace std;

void determinaNumeroMayor(double dA, double dB, double dC, double dD)
{
    double dNumeroMayor;
    if ((dA >= dB) && (dA >= dC) && (dA >= dD))
    {
        dNumeroMayor = dA;
    }else if ((dB >= dA) && (dB >= dC) && (dB >= dD))
    {
        dNumeroMayor = dB;
    }else if ((dC >= dA) && (dC >= dB) && (dC >= dD))
    {
        dNumeroMayor = dC;
    }else if ((dD >= dA) && (dD >= dB) && (dD >= dC))
    {
        dNumeroMayor = dD;
    }
    cout << "El numero mayor es: " << dNumeroMayor << endl;
}

int main()
{
    //Declaración de variables
    double dNumero1, dNumero2, dNumero3, dNumero4, dNumeroMayor;

    //Se piden los valores
    cout << "Hola, este programa determina el numero mayor de cuatro numeros." << endl;
    cout << "Teclea el valor del primer numero: ";
    cin >> dNumero1;
    cout << "Teclea el valor del segundo numero: ";
    cin >> dNumero2;
    cout << "Teclea el valor del tercer numero: ";
    cin >> dNumero3;
    cout << "Teclea el valor del cuarto numero: ";
    cin >> dNumero4;

    //Se utiliza la funcion para obtener el numero mayor
    determinaNumeroMayor(dNumero1, dNumero2, dNumero3, dNumero4);

    return 0;
}
