/****************************************************************************************

 Archivo: Tarea10_A01113049.cpp
 Fecha: 9 de Marzo del 2015.
 Author: Luis Alfonso Rojo Sanchez (A01113049)

 Descripcion:
    Este programa hace una sumatoria de fracciones a partir de un numero n.
 Análisis:
    * Entradas:
        Numero (n).
    * Procesos:
        Mediante sumas, condiciones y ciclos realiza la suma de fracciones.
    * Salidas:
        Despliega el resultado de la sumatoria.
 Diseño:
    * Algoritmo:
    Mensaje de bienvenida

    Declaracion de variables
    float fAcum, fCreciente, fContenedor;
    int iN;

    Se pide el valor de iN
    Se lee el valor de iN

    Se inicializan variables
    fAcum = 0;
    fCreciente = 1;

    Condicion para comprobar si el numero es correcto
    {
        ciclo que se repite mientras fCreciente no sea igual a (iN + 1)
        {
            Se despliega la fraccion

            condicion sobre que si fCreciente < iN
            {
                Se despliega el signo de +
            }
            fContenedor = 1 / fCreciente

            fAcum = fAcum + fContenedor

            fCreciente = fCreciente + 1
        }
        Se despliega el resultado de la sumatoria
    }
    Se despliega que el programa ha terminado

***************************************************************************************/

#include<iostream>

using namespace std;

main()
{
    //Mensaje de bienvenida
    cout << "Hola! este programa hace la sumatoria de fracciones que le des n veces." << endl;
    cout << " " << endl;

    //Declaracion de variables
    float fAcum, fCreciente, fContenedor;
    int iN;

    //Pedir el valor de fN
    cout << "Cual es el valor de n para la sumatoria? ";
    cin >> iN;
    cout << " " << endl;

    //Inicializacion de variables
    fAcum = 0;
    fCreciente = 1;

    //Condicion para comprobar si el numero es correcto
    if (iN >= 1)
    {
        //Ciclo
        while (fCreciente != (iN + 1) )
        {
            cout << "1/" << fCreciente;

            if (fCreciente < iN)
            {
                cout << " + ";
            }

            fContenedor = 1 / fCreciente;

            fAcum = fAcum + fContenedor;

            fCreciente = fCreciente + 1;

        }

        //Se despliega el resultado de la operacion
        cout << " = " << fAcum << endl;

    }

    //Se despliega que el programa ha terminado
    cout << " " << endl;
    cout << "El programa ha finalizado!" << endl;

    return 0;
}
