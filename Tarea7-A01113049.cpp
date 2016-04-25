/****************************************************************************************

 Archivo: Tarea7-A01113049.cpp
 Fecha: 19 de Febrero del 2015.
 Author: Luis Alfonso Rojo Sanchez (A01113049)

 Descripcion:
    Este programa toma un valor de hora en formato de 24 horas y lo transforma en formato de 12 horas.
 Análisis:
    * Entradas:
        Valores de la hora y los minutos en formato de 24 horas.
    * Procesos:
        Funcion que mediante condiciones convierte la hora de formato 24 horas a formato 12 horas
    * Salidas:
        Valores de la hora y los minutos en formato de 12 horas.
 Diseño:
    * Algoritmo:
        Funcion AMPM
        {
        Formato para la hora 12 AM mediante condicion
        Formato para la hora de 1 a 11 AM mediante condicion
        Formato para la hora 12 PM mediante
        Formato para la hora de 1 a 11 PM mediante condicion
        }

        Declaración de variables
        Bienvenida de mensaje
        Se piden los valores
        Se llama a la funcion

***************************************************************************************/
#include <iostream>

using namespace std;

void AMPM(int iHora, int iMinutos)
{
    //Este es el horario AM
    if (iHora >= 0 && iHora <= 11)
    {
        if (iHora == 0)
        {
            if (iMinutos >= 0 && iMinutos <= 9)
            {
                iHora =iHora + 12;
                cout << "La hora en formato de 12 horas es: " << iHora << ":0" << iMinutos << " " << "AM";
                cout << " " << endl;
            }
            else
            {
                iHora =iHora + 12;
                cout << "La hora en formato de 12 horas es: " << iHora << ":" << iMinutos << " " << "AM";
                cout << " " << endl;
            }
        }
        else if (iHora >= 1 && iHora <= 11)
        {
            if (iMinutos >= 0 && iMinutos <= 9)
            {
                cout << "La hora en formato de 12 horas es: " << iHora << ":0" << iMinutos << " " << "AM";
                cout << " " << endl;
            }
            else
            {
                cout << "La hora en formato de 12 horas es: " << iHora << ":" << iMinutos << " " << "AM";
                cout << " " << endl;
            }
        }
    }
    //Este es el horario PM
    else if (iHora >= 12 && iHora <=23)
    {
        if (iHora == 12)
        {
            if (iMinutos >= 0 && iMinutos <= 9)
            {
                cout << "La hora en formato de 12 horas es: " << iHora << ":0" << iMinutos << " " << "PM";
                cout << " " << endl;
            }
            else
            {
                cout << "La hora en formato de 12 horas es: " << iHora << ":" << iMinutos << " " << "PM";
                cout << " " << endl;
            }
        }
        else if (iHora >= 13 && iHora <= 23)
        {
            if (iMinutos >= 0 && iMinutos <= 9)
            {
                iHora = iHora - 12;
                cout << "La hora en formato de 12 horas es: " << iHora << ":0" << iMinutos << " " << "PM";
                cout << " " << endl;
            }
            else
            {
                iHora = iHora - 12;
                cout << "La hora en formato de 12 horas es: " << iHora << ":" << iMinutos << " " << "PM";
                cout << " " << endl;
            }
        }
    }
}
int main()
{
    //Declaración de variables
    int iHora, iMinutos;

    //Bienvenida de mensaje
    cout << "Hola!, este programa recibe un tiempo en formato" << endl;
    cout << "de 24 horas y lo transforma a horario AM/PM" << endl;
    cout << " " << endl;

    //Se piden los valores
    cout << "No se admite el valor 24 porque despues de las" << endl;
    cout << "23:59 PM se vuelven las 00:00 que son las 12 AM" << endl;
    cout << " " << endl;
    cout << "Teclea el valor de la hora en formato de 0 a 23: ";
    cin >> iHora;
    cout << "Teclea el valor de los minutos en formato de 00 a 59: ";
    cin >> iMinutos;

    cout << " " << endl;

    //Se llama a la funcion solamente si las horas van de 0 a 24 y los minutos de 0 a 59
    if (iHora >= 0 && iHora <= 23)
    {
        if (iMinutos >= 0 && iMinutos <= 59)
        {
            AMPM(iHora, iMinutos);
        }
        else
        {
            cout << "El tiempo ingresado no es correcto!";
            cout << " " << endl;
        }
    }
    else
    {
        cout << "El tiempo ingresado no es correcto!";
        cout << " " << endl;
    }
    return 0;
}
