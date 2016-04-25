/****************************************************************************************

 Archivo: Tarea16_A01113049.cpp
 Fecha: 9 de Abril del 2015.
 Author: Luis Alfonso Rojo Sanchez (A01113049)

 Descripcion:
    Este programa pide al usuario cantidad de numeros y el valor de cada uno de esos numeros
     y luego realiza el promedio.
    * Entradas:
        Cantidad de numeros y el valor de cada uno de los numeros.
    * Procesos:
        Acumulacion de los valores de los numeros dados
        Funcion que promedia los valores de los numeros dados.
    * Salidas:
        Promedio de los valores de los numeros dados.
 Diseño:
    * Algoritmo:

    Funcion que calcula el promedio: float fCaulculaPromedio(int iCantidad, int iNumeros[])
    {
        Variable donde se realizara la suma de valores: fContenedor
        Variable donde se relizara el promedio de los valores: fPromedio

        Ciclo for para sumar valores: for (int i = 0; i< iCantidad; i++)
        {
            Aqui se realiza la suma de valores: fContenedor = fContenedor + iNumeros[i];
        }

        Operacion que realiza el promedio: fPromedio = fContenedor / iCantidad;

        Valor de retorno: fPromedio;
    }

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

            Se declara la variable float fVariableResultado

            Se iguala el valor de la variable float al valor de retorno de la funcion que calcula el promedio: fVariableResultado = fCaulculaPromedio(cantidad, numeros);

            cout << endl;

        //Se despliega el resultado del promedio
        cout << "El promedio de todos los numeros en el arreglo es: " << fVariableResultado << endl;


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

float fCaulculaPromedio(int iCantidad, int iNumeros[])
{
        float fContenedor = 0;       //Variable donde se realizara la suma de valores
        float fPromedio = 0;         //Variable donde se relizara el promedio de los valores

        //Ciclo for para sumar valores
        for (int i = 0; i< iCantidad; i++)
        {
            /*cout << "El valor en la posicion " << i << " del arreglo es: " << numeros[i] << endl;*/ //Lo use para debuggear

            fContenedor = fContenedor + iNumeros[i];   //Aqui se realiza la suma de valores

            /*cout << "La suma de tus numeros dados hasta el momento es: " << dContenedor << endl;*/ //Lo use para debuggear
        }

        fPromedio = fContenedor / iCantidad;           //Operacion que realiza el promedio

        //Valor de retorno
        return fPromedio;
}

int main()
{
        //Mensaje de bienvenida
    cout << "Hola!, este programa realiza el promedio de una cantidad dada de valores en un arreglo." << endl;

    // Declaración de variables
    int numeros[1000];  // Variable para guardar los números para poder usar hasta 1000 números
    int cantidad;       // Variable que indicará la cantidad de casilleros que realmente se usaran
    char r;             // Variable para guardar la respuesta del usuario de que si quiere continuar

    cout << endl;

    // Ciclo para seguir pidiendo más números hasta que el usuario ya no quiera seguir
    do {
        // Ciclo para pedir y validar la cantidad
        do
        {
            cout << "Dame la cantidad: ";
            cin >> cantidad;
        } while ((cantidad > 1000) || (cantidad < 1));

        cout << endl; //Salto de linea

        // Ciclo para pedir esa cantidad de números
        for (int i=0; i < cantidad; i++)
        {
            cout << "Dame la cantidad " << i+1 << ": ";
            cin >> numeros[i];
        }

        cout << endl;                 //Salto de linea

        //Se declara la variable float
        float fVariableResultado;

        //Se iguala el valor de la variable float al valor de retorno de la funcion que calcula el promedio
        fVariableResultado = fCaulculaPromedio(cantidad, numeros);

        //Se despliega el resultado del promedio
        cout << "El promedio de todos los numeros en el arreglo es: " << fVariableResultado << endl;

        cout << endl;                 //Salto de linea

        // Otro ciclo para pedir y validar si el usuario quiere seguir o no
        do {
            cout << "Quieres dar otra lista de numeros (s/n)?" << endl;
            cin >> r;
            r = tolower(r);
        } while ((r != 's') && (r != 'n'));

    } while (r == 's');

    // Final del programa
    cout << "\nFin del programa!\n\n";
    return 0;
}
