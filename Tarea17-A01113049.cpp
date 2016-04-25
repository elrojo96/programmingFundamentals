/****************************************************************************************

 Archivo: Tarea17_A01113049.cpp
 Fecha: 13 de Abril del 2015.
 Author: Luis Alfonso Rojo Sanchez (A01113049)

 Descripcion:
    Este programa pide una cantidad para ingresas el los valores de esa cantidad en el arreglo.
    * Entradas:
        Cantidad de numeros y el valor de cada uno de los numeros.
    * Procesos:
        Funcion que invierte los numeros del arreglo.
    * Salidas:
        Arreglo con los valores invertidos.
 Diseño:
    * Algoritmo:

    Funcion que voltea los numeros void alreves(int nums[], int cant)
    {
        Arreglo clon: iClon[1000];
        Variable que decrementa: a = (cant - 1);

        Ciclo for para copiar los elementos al reves en el arreglo clon: for(int i = 0; i < cant; i++)
        {
            iClon[i] = nums[a];
            a--;
        }

        Ciclo for para copiar los elementos del arreglo clon en el arreglo original: for(int i = 0; i < cant; i++)
        {
            nums[i] = iClon[i];
        }
    }

    int main()
    {
        Declaración de variables
        Variable para guardar los números para poder usar hasta 1000 números: int numeros[1000]
        Variable que indicará la cantidad de casilleros que realmente se usaran: int cantidad
        Variable para guardar la respuesta del usuario de que si quiere continuar: char r

        Ciclo para seguir pidiendo más números hasta que el usuario ya no quiera seguir: do
        {
            Ciclo para pedir y validar la cantidad: do
            {
                cout << "Dame la cantidad: ";
                cin >> cantidad;
            }
            while ((cantidad > 1000) || (cantidad < 1));

            Salto de linea

            Ciclo para pedir esa cantidad de números: for (int i = 0; i < cantidad; i++)
            {
                cout << "Dame el numero " << i+1 << ": ";
                cin >> numeros[i];
            }

            Funcion: alreves(numeros, cantidad)

            Salto de linea
            Mensaje que dice que los valores seran desplegados al reves

            Ciclo for para desplegar los valores del arreglo ahora que estan al reves: for(int i = 0; i < cantidad; i++)
            {
                cout << numeros[i] << " ";
            }

            Salto de linea
            Salto de linea

            Otro ciclo para pedir y validar si el usuario quiere seguir o no: do
            {
                cout << "Quieres dar otra lista de numeros (s/n)?: ";
                cin >> r;
                r = tolower(r);
            }
            while ((r != 's') && (r != 'n'));
            cout << endl;
        }
        while (r == 's');

        Se despliega que se finalizo el programa
        return 0;
    }

***************************************************************************************/

#include <iostream>
using namespace std;

void alreves(int nums[], int cant)
{
    int iClon[1000];        //Arreglo clon
    int a = (cant - 1);     //Variable que decrementa

    /*cout << endl;*/       //Salto de linea cuando debuggear

    //Ciclo for para copiar los elementos al reves en el arreglo clon
    for(int i = 0; i < cant; i++)
    {
        iClon[i] = nums[a];

        /*cout << "El elemento " << i + 1 << " en la posicion " << i << " del arreglo clon vale: " << iClon[i] << endl;*/

        a--;
    }

    /*cout << endl;*/       //Salto de linea cuando debuggear

    //Ciclo for para copiar los elementos del arreglo clon en el arreglo original
    for(int i = 0; i < cant; i++)
    {
        nums[i] = iClon[i];

        /*cout << "El elemento " << i + 1 << " en la posicion " << i << " del arreglo original ahora vale: " << nums[i] << endl;*/
    }
}

int main()
{
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
            cout << "Dame la cantidad: ";
            cin >> cantidad;
        }
        while ((cantidad > 1000) || (cantidad < 1));

        cout << endl;

        // Ciclo para pedir esa cantidad de números
        for (int i = 0; i < cantidad; i++)
        {
            cout << "Dame el numero " << i+1 << ": ";
            cin >> numeros[i];
        }

        alreves(numeros, cantidad);         //Se llama a la funcion

        cout << endl;                       //Salto de linea
        cout << "El arreglo al reves es: "; //Mensaje que dice que los valores

        //Ciclo for para desplegar los valores del arreglo ahora que estan al reves
        for(int i = 0; i < cantidad; i++)
        {
            cout << numeros[i] << " ";
        }

        // Otro ciclo para pedir y validar si el usuario quiere seguir o no
        cout << endl;
        cout << endl;

        do
        {
            cout << "Quieres dar otra lista de numeros (s/n)?: ";
            cin >> r;
            r = tolower(r);
        }
        while ((r != 's') && (r != 'n'));
        cout << endl;
    }
    while (r == 's');

    // Final del programa
    cout << "Fin del programa!";
    return 0;
}
