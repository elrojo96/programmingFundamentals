/****************************************************************************************

 Archivo: Tarea11_A01113049.cpp
 Fecha: 9 de Marzo del 2015.
 Author: Luis Alfonso Rojo Sanchez (A01113049)

 Descripcion:
    Este programa hace el factorial de un numero
 Análisis:
    * Entradas:
        Numero (n).
    * Procesos:
        Mediante operanciones basicas, condiciones y ciclos realiza el factorial de un numero.
    * Salidas:
        Despliega el factorial del numero n dado.
 Diseño:
    * Algoritmo:
        //Mensaje de bienvenida

        //Declaracion de variables
        iA, iB, iFactorial

        //Pide el valor de n
        Pide el valor de iNumero
        Lee el valor de iNumero

        //Se inicializa el variable de iFactorial
        iFactorial = 1

        //Factorial usando "For"
        for (iB = 1; iB <= iA; iB++)
        {
            iFactorial = iB * iFactorial;
        }
        Se despliega el resultado de iFactorial usando For

        //Factorial usando "Do While"
        iB  = 1;
        iFactorial = 1;

        do
        {
            iFactorial = iB * iFactorial;
            iB++;
        }
        while(iB <= iA);

        Se despliega el resultado de iFactorial usando Do While

        //Factorial usando "While"
        iB  = 1;
        iFactorial = 1;

        while (iB <= iA)
        {
            iFactorial = iB * iFactorial;
            iB++;
        }
         Se despliega el resultado de iFactorial usando While

         Mensaje de despedida

***************************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //Mensaje de bienvenida
    cout << "Hola, este programa calculara el factorial del numero entero que ingrese!" << endl;

    //Declaracion de variables
    int iA, iB, iFactorial;

    //Pide el valor de n
    cout << "Por favor ingrese su numero: ";
    cin >> iA;

    //Se inicializa la variable iFactorial
    iFactorial = 1;

    //Factorial usando "For"
    //For
    for (iB = 1; iB <= iA; iB++)
    {
        iFactorial = iB * iFactorial;
    }
    //Se despliega el resultado
    cout << "El factorial del numero " << iA << " es " << iFactorial << " (For)"<< endl;

    //Factorial usando "Do While"
    //Se inicializan las variables
    iB  = 1;
    iFactorial = 1;
    //Do While
    do
    {
        iFactorial = iB * iFactorial;
        iB++;
    }
    while(iB <= iA);

    //Se despliega el resultado
    cout << "El factorial del numero " << iA << " es " << iFactorial << " (Do While)"<< endl;


    //Factorial usando "While"
    //Se inicializan las variables
    iB  = 1;
    iFactorial = 1;
    //While
    while (iB <= iA)
    {
        iFactorial = iB * iFactorial;
        iB++;
    }
    //Se despliega el resultado
    cout << "El factorial del numero " << iA << " es " << iFactorial << " (While)"<< endl;

    cout << "El programa ha terminado!";
    return 0;
}
