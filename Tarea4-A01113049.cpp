/****************************************************************************************

 Archivo: BilletesMonedas.cpp
 Fecha: 2 de Febrero del 2015.
 Author: Luis Alfonso Rojo Sanchez (A01113049)

 Descripcion:
    Este programa toma una cantidad de pesos y la transforma en billetes y monedas.
 Análisis:
    * Entradas:
        Valor de la cantidad en pesos.
    * Procesos:
        Conversion a billetes y monedas.
    * Salidas:
        Desplegar la cantidad de billetes y monedas.
 Diseño:
    * Algoritmo:
        Declaración de variables
        Preguntar al usuario la cantidad de pesos
        Leer el valor de entrada
        Procesos para obtener billetes
        Procesos para obtener monedas
        Desplegar los la cantidad de billetes y monedas

***************************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    //Se declaran las variables
    int iCantidad, iResiduo, iBilletes200, iBilletes100, iBilletes50, iBilletes20, iMonedas10, iMonedas5, iMonedas2, iMonedas1;

    //Se pide la cantidad de pesos a convertir a billetes y monedas
    cout << "Teclea la cantidad de pesos a convertir en billetes y monedas: $";
    cin >> iCantidad;

    if (iCantidad > 0)
    {
    //Conversiones a billetes y monedas
    iBilletes200 = iCantidad / 200;
    iResiduo = iCantidad % 200;

    iBilletes100 = iResiduo / 100;
    iResiduo = iResiduo % 100;

    iBilletes50 = iResiduo / 50;
    iResiduo = iResiduo % 50;

    iBilletes20 = iResiduo / 20;
    iResiduo = iResiduo % 20;

    iMonedas10 = iResiduo / 10;
    iResiduo = iResiduo % 10;

    iMonedas5 = iResiduo / 5;
    iResiduo = iResiduo % 5;

    iMonedas2 = iResiduo / 2;
    iResiduo = iResiduo % 2;

    iMonedas1 = iResiduo / 1;

    //Se desbliega la cantidad de billetes y monedas
    cout << "La cantidad de billetes de $200 es: " << iBilletes200 << endl;
    cout << "La cantidad de billetes de $100 es: " << iBilletes100 << endl;
    cout << "La cantidad de billetes de $50 es: " << iBilletes50 << endl;
    cout << "La cantidad de billetes de $20 es: " << iBilletes20 << endl;
    cout << "La cantidad de monedas de $10 es: " << iMonedas10 << endl;
    cout << "La cantidad de monedas de $5 es: " << iMonedas5 << endl;
    cout << "La cantidad de monedas de $2 es: " << iMonedas2 << endl;
    cout << "La cantidad de monedas de $1 es: " << iMonedas1 << endl;
    }
    else
    cout << "No se puede convertir porque el numero es negativo";

    return 0;
}
