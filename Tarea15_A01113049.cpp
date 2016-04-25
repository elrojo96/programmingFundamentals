/****************************************************************************************

 Archivo: Tarea15_A01113049.cpp
 Fecha: 6 de Abril del 2015.
 Author: Luis Alfonso Rojo Sanchez (A01113049)

 Descripcion:
    Este programa pide al usuario cantidad de numeros y el valor de cada uno de esos numeros
     y luego realiza el promedio.
    * Entradas:
        Cantidad de numeros y el valor de cada uno de los numeros.
    * Procesos:
        Acumulacion de los valores de los numeros dados
        Promedio de los valores de los numeros dados.
    * Salidas:
        Promedio de los valores de los numeros dados.
 Diseño:
    * Algoritmo:

    main
    {
        Mensaje de bienvenida

        // Declaración de variables
        Se declara la variable numeros[1000]
        Se declara la variable cantidad
        Se declara la variable r

        // Ciclo para seguir pidiendo más números hasta que el usuario ya no quiera seguir
        do {
            // Ciclo para pedir y validar la cantidad
            do
            {
                Salto de linea
                Se pide la cantidad
                Se lee la cantidad
                Salto de linea
            } while ((cantidad > 1000) || (cantidad < 1));

            // Ciclo para pedir esa cantidad de números
            for (int i=0; i < cantidad; i++)
            {
                Se pide que cantidad del valor del arreglo
                Se lee la cantidad del valor del arreglo
            }

            Salto de linea
            Se declara la variable dContenedor
            Se declara la variable dPromedio

            //Ciclo for para sumar valores
            for (int i=0; i< cantidad; i++)
            {
                dContenedor = dContenedor + numeros[i]
            }

            dPromedio = dContenedor / cantidad

            Se despliega un mensaje para anunciar los datos de la operacion promedio
            Se despliega el dividendo en la operacion promedio
            Se despliega el divisor en la operacion promedio
            Se despliega el resultado de la operacion promedio

            Salto de linea

            // Otro ciclo para pedir y validar si el usuario quiere seguir o no
            do {
                Se pide si se quiere otra lista de numeros
                Se lee si se quiere otra lista de numeros
                Se usa tolower con la respuesta
                Salto de linea
            } while ((r != 's') && (r != 'n'));

        } while (r == 's');

        Mensaje que despliega el final del programa
    }

***************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    //Mensaje de bienvenida
    cout << "Hola!, este programa realiza el promedio de una cantidad dada de valores en un arreglo." << endl;

    // Declaración de variables
    int numeros[1000];  // Variable para guardar los números para poder usar hasta 1000 números
    int cantidad;       // Variable que indicará la cantidad de casilleros que realmente se usaran
    char r;             // Variable para guardar la respuesta del usuario de que si quiere continuar

    // Ciclo para seguir pidiendo más números hasta que el usuario ya no quiera seguir
    do
    {
        // Ciclo para pedir y validar la cantidad
        do
        {
            cout << endl;
            cout << "Dame la cantidad: ";
            cin >> cantidad;
            cout << endl;
        }
        while ((cantidad > 1000) || (cantidad < 1));

        // Ciclo para pedir esa cantidad de números
        for (int i=0; i < cantidad; i++)
        {
            cout << "Dame la cantidad " << i+1 << ": ";
            cin >> numeros[i];
        }

        cout << endl;                 //Salto de linea
        double dContenedor = 0;       //Variable donde se realizara la suma de valores
        double dPromedio = 0;         //Variable donde se relizara el promedio de los valores

        //Ciclo for para sumar valores
        for (int i=0; i< cantidad; i++)
        {
            /*cout << "El valor en la posicion " << i << " del arreglo es: " << numeros[i] << endl;*/ //Lo use para debuggear

            dContenedor = dContenedor + numeros[i];   //Aqui se realiza la suma de valores

            /*cout << "La suma de tus numeros dados hasta el momento es: " << dContenedor << endl;*/ //Lo use para debuggear
        }

        dPromedio = dContenedor / cantidad;           //Operacion que realiza el promedio

        cout << "********** Datos para realizar el promedio **********" << endl;    //Se despliega un mensaje
        cout << "La SUMA de tus numeros dados es: " << dContenedor << endl;         //Se despliega el dividendo
        cout << "La CANTIDAD de numeros dados: " << cantidad << endl;               //Se despliega el divisor
        cout << "El PROMEDIO de los valores del arreglo es: " << dPromedio << endl; //Se despliega el promedio

        cout << endl;                 //Salto de linea

        // Otro ciclo para pedir y validar si el usuario quiere seguir o no
        do
        {
            cout << "Quieres dar otra lista de numeros (s/n)?: ";
            cin >> r;
            r = tolower(r);
            cout << endl;
        }
        while ((r != 's') && (r != 'n'));

    }
    while (r == 's');

    // Final del programa
    cout << "Fin del programa!";
    return 0;
}
