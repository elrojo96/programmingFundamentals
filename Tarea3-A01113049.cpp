/****************************************************************************************

 Archivo: HorasMinutosSegundos.cpp
 Fecha: 29 de enero de 2015.
 Author: Luis Alfonso Rojo Sanchez (A01113049)

 Descripcion:
    Este programa calcula las horas, minutos y segundos a partir
    de una cantidad de segundos dada por el usuario.
 Análisis:
    * Entradas:
        Valor de los segundos
    * Procesos:
        Formulas para convertir a horas, minutos  segundos.
    * Salidas:
        Desplegar el tiempo obtenido.
 Diseño:
    * Algoritmo:
        Declaración de variables
        Preguntar al usuario la cantidad de segundos a convertir
        Leer el valor de entrada
        Usar la formula para convertir a horas
        Usar la formula para convertir a minutos
        Usar la formula para convertir a segundos
        Desplegar los tiempos obtenidos

***************************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    //Declaración de variables
    int iSegundosIngresados, iHoras, iMinutos, iSegundos;

    //Entrada de valores
    cout << "Ingrese la cantidad de segundos a convertir: ";
    cin >> iSegundosIngresados;

    //Se realizan las conversiones
    iHoras = (iSegundosIngresados / 3600);
    iMinutos = ((iSegundosIngresados - iHoras * 3600) / 60);
    iSegundos = iSegundosIngresados - (iHoras * 3600 + iMinutos * 60);

    //Se despliegan los resultados
    cout << "El tiempo resultante es:" << endl;
    cout << "Horas: " << iHoras << " Minutos: " << iMinutos << " Segundos: " << iSegundos << endl;
    return 0;
}
