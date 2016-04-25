/****************************************************************************************

 Archivo: Tarea6-A01113049.cpp
 Fecha: 16 de Febrero del 2015.
 Author: Luis Alfonso Rojo Sanchez (A01113049)

 Descripcion:
    Este programa toma tres valores que son los lados del triangulo y determina que tipo de triangulo es.
 Análisis:
    * Entradas:
        Valores de los tres lados del triangulo.
    * Procesos:
        Funcion que mediante condiciones compara los valores de los lados del triangulo.
    * Salidas:
        Despliega el tipo de triangulo que es.
 Diseño:
    * Algoritmo:
        Se declara la funcion "decideTriangulo"
        {

        if (Se compara el lado 1 con los lados 2 y 3 "&&")
        Se determina que es equilatero

        if (Se comparan los tres lados "||")
        Se determina que es isoceles

        if (Se comparan los tres lados "!=")
        Se determina que es escaleno
        }

        Declaración de variables
        Se pide el primer lado del triangulo
        Se lee el primer valor
        Se pide el segundo lado del triangulo
        Se lee el segundo valor
        Se pide el tercer lado del triangulo
        Se lee el tercer valor
        Se llama a la función

***************************************************************************************/
#include <iostream>

using namespace std;

void decideTriangulo (double dPrimerLado, double dSegundoLado, double dTercerLado)
{
    if (dPrimerLado == dSegundoLado && dPrimerLado == dTercerLado)
    {
        cout << "El triangulo es equilatero";
    }
    else if (dPrimerLado == dSegundoLado || dPrimerLado == dTercerLado || dSegundoLado == dTercerLado)
    {
        cout << "El triangulo es isoceles";
    }
    else if (dPrimerLado != dSegundoLado && dPrimerLado != dTercerLado && dSegundoLado != dTercerLado)
    {
        cout << "El triangulo es escaleno";
    }
}

int main()
{
    double dLado1, dLado2, dLado3;
    //Mensaje de bienvenida
    cout << "Hola!, este programa determinar el tipo de triangulo" << endl;
    cout << "a partir de los lados que ingresas" << endl;

    //Se piden los lados del triangulo
    cout << "Cuanto vale el primer lado del triangulo: ";
    cin >> dLado1;
    cout << "Cuanto vale el segundo lado del triangulo: ";
    cin >> dLado2;
    cout << "Cuanto vale el tercer lado del triangulo: ";
    cin >> dLado3;

    //Se llama a la funcion
    decideTriangulo(dLado1, dLado2, dLado3);
    return 0;
}
