/****************************************************************************************

 Archivo: Tarea14_A01113049.cpp
 Fecha: 26 de Marzo del 2015.
 Author: Luis Alfonso Rojo Sanchez (A01113049)

 Descripcion:
    Este programa pide al usuario numeros y luego los despliega alreves de como los ingreso.
    * Entradas:
        Cantidad de numeros a ingresar y numeros ingresados.
    * Procesos:
        Mediante ciclos for se piden los numeros y se despliegan alreves.
    * Salidas:
        Se despliegan los numeros ingresados pero alreves.
 Diseño:
    * Algoritmo:
        Se declara el arreglo

        Se declara la cantidad de valores a ingresar

        do{
            Se pide la cantidad de valores a ingresar
            Se lee la cantidad de valores a ingresar
          }
          while(Este cantidad sea mayor a 0 y menor o igual a 1000)

        Ciclo FOR que pide y lee todos los números que el usuario teclee y los guarda en el arreglo.
        for(int x = 0; x < iNumeroDado; x++)
        {
            Se pide que teclee el numero que se quiere ingresar
            Se lee iArregloMil[x];
        }

        Se depliega que se van a desplegar los mismos numeros pero al reves

        Ciclo FOR que despliega todos los números pero alrevés (Del fin al inicio que tecleó el usuario).
        for(int x = iNumeroDado - 1; x >= 0; x--)
        {
            Se despliega iArregloMil[x]
        }

***************************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //Se declara el arreglo
    int iArregloMil[1000];

    //Se declaran variables
    int iNumeroDado;

    //Se pide al usuario a cantidad de numeros a teclear
    do
    {
        cout << "Teclea la cantidad de numeros que deseas teclear: ";
        cin >> iNumeroDado;
    }
    while( !(iNumeroDado <= 1000 && iNumeroDado > 0) );

    //endl
    cout << endl;

    //Ciclo FOR que pide y lee todos los números que el usuario teclee y los guarda en el arreglo.
    for(int x = 0; x < iNumeroDado; x++)
    {
        cout <<"Teclee el numero que quieres ingresar: ";
        cin >> iArregloMil[x];
    }

    //endl
    cout << endl;

    //Se depliega que esos numeros van a ser desplegados pero al reves
    cout << "Se van a desplegar los mismos numeros pero al reves: " << endl;

    //Ciclo FOR que despliega todos los números pero alrevés (Del fin al inicio que tecleó el usuario).
    for(int x = iNumeroDado - 1; x >= 0; x--)
    {
        cout << iArregloMil[x] << endl;
    }

    return 0;
}
