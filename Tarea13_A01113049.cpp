/****************************************************************************************

 Archivo: Tarea13_A01113049.cpp
 Fecha: 19 de Marzo del 2015.
 Author: Luis Alfonso Rojo Sanchez (A01113049)

 Descripcion:
    Este programa calcula los numeros primos anteriores a un numero n dado
 Análisis:
    * Entradas:
        Numero (n).
    * Procesos:
        Mediante operanciones condiciones y ciclos se obtienen numeros primos.
    * Salidas:
        Se despliegan los numeros primos.
 Diseño:
    * Algoritmo:
        funcion que imprime los numeros primos
        {
            Se despliega la frase los numeros primos son

            Condicion num es mayor o igual a 2
            {
                Se despliega que 2 es primo
            }

            ciclo for(int iContador = 2; iContador <= num; iContador++)
            {
                ciclo for (int iComprobador = 2; iComprobador < iContador; iComprobador++)
                {
                    condicion if(iContador % iComprobador > 0 && iComprobador == iContador -1)
                    {
                        Se despliega que el numero es primo (numero + 1)
                    }
                    else if(iContador % iComprobador == 0)
                    {
                        iComprobador = iContador
                    }
                }
            }
        }
        funcion main
        {
            Se declara la variable n

            Se pide el numero hasta donde desea checar primos
            Se lee n

            Se llama a la funcion primos(n);

            Se depliega que el programa ha finalizado
        }
***************************************************************************************/

#include <iostream>
using namespace std;

// Funcion que imprime los primero "n" primos
// Aqui solo tienen que completar esta funcion
void primos(int num)
{
    cout << "Los numeros primos son:" <<endl;

    if (num >= 2)
    {
        cout << "2 es primo" << endl;
    }

    for (int iContador = 2; iContador <= num; iContador++)
    {
        for (int iComprobador = 2; iComprobador < iContador; iComprobador++)
        {
            //Checar si el numero es primo
            if(iContador % iComprobador > 0 && iComprobador == iContador - 1)
            {
                cout << iComprobador + 1 <<" es primo" << endl;
            }
            //Numeros no primos
            else if(iContador % iComprobador == 0)
            {
                iComprobador = iContador;
            }
        }
    }
}
// Funcion principal del programa
int main ()
{
    // Declaracion de varialbes
    int n;

    // Se piden los datos
    cout << "Teclea el numero hasta donde checar los primos: ";
    cin >> n;
    cout << endl;

    // Llamamos a la funcion que imprime los primos
    primos(n);

    // Terminamos el programa
    cout << endl;
    cout << "Fin del programa!" << endl;
    return 0;
}
