/****************************************************************************************

 Archivo: Tarea9-A01113049.cpp
 Fecha: 5 de Marzo del 2015.
 Author: Luis Alfonso Rojo Sanchez (A01113049)

 Descripcion:
    Este programa es una calculadora que realiza operaciones aritmeticas.
 Análisis:
    * Entradas:
        2 valores numericos y un operador
    * Procesos:
        Estatuto Switch que realiza las operaciones, funciones, ciclos y condiciones que determinan si se sigue realizando operaciones.
    * Salidas:
        Valor de la operacion realizada.
 Diseño:
        Algoritmo: ( Diseñado por Leonardo Garrido ® )
         * Algoritmo calcula (n1, op, n2):

    Paráetros de entrada: n1 (float), n2 (float), op (char)

    Parámetro de salida: El resultado de la operación res (float).

        CASOS del operador op:

            '+': res = n1 + n2

            '-': res = n1 - n2

            '*': res = n1 * n2

            '/': res = n1 / n2

            'E', 'e': res = potencia de n1 a la n2

            'R', 'r': res = residiuo de n1 / n2

        Regresar el resultado res

 * Algoritmo pideOperador():

    Paráetros de entrada: ninguno

    Parámetro de salida: El operador (char)

        MIENTRAS que el operador sea diferente a '+', '-', '*', '/', 'R', 'r', 'E' y 'e'

            DESPLEGAR "Cuál es el operador? "

            LEER operador

        REGRESAR operador



 * Algoritmo pideSeguir():

    Paráetros de entrada: ninguno

    Parámetro de salida: regreso (bool)

        MIENTRAS que la respuesta resp (char) sea diferente a 's', 'S', 'n', 'N'

            DESPLEGAR "Quieres continuar con otra operación? "

            LEER resp (char)

        IF resp es 's' o 'S'

            REGRESAR true

        ELSE

            REGRESAR false

 * Algoritmo principal:



    MIENTRAS (seguir)

        DESPLEGAR "Cuál es el operando 1? "

        LEER operando1

        operador = pideOperador()

        DESPLEGAR "Cuál es el operando 2? "

        LEER operando2

        resultado = calcula(operando1, operador, operando2);

        DESPLEGAR "El resultado de la operación ", operando1, " ", operador, " ", operando2, " es: ", resultado;

        seguir = pideSeguir()

    DESPLEGAR "Fin del programa!!!"

***************************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

char pideOperador()
{
    //Se declara la variable del operador
    char cOperador;

    //Se evalua si el operador pertenece a los caracteres permitidos
    while (cOperador != '+' && cOperador != '-' && cOperador != '*' && cOperador != '/' && cOperador != 'R' && cOperador != 'r' && cOperador != 'E' && cOperador != 'e')
    {
        cout << ("Operadores disponibles: +, -, *, /, E, R") << endl;
        cout << "Teclea el operador  : ";
        cin >> cOperador;
    }
    return cOperador;
}

float calcula(float fOperando1, char cOperador, float fOperando2)
{
    //Se declaran variables
    float fRes;
    int iNumero1, iNumero2;

    //Switch
    switch(cOperador)
    {
    case '+':
        fRes = fOperando1 + fOperando2;
        break;
    case '-':
        fRes = fOperando1 - fOperando2;
        break;
    case '*':
        fRes = fOperando1 * fOperando2;
        break;
    case '/':
        fRes = fOperando1 / fOperando2;
        break;
    case 'E':
        fRes = pow(fOperando1, fOperando2);
        break;
    case 'e':
        fRes = pow(fOperando1, fOperando2);
        break;
    case 'R':
        //Se cambian las variables a tipo int
        iNumero1 = fOperando1;
        iNumero2 = fOperando2;

        fRes = iNumero1 % iNumero2;
        break;
    case 'r':
        //Se cambian las variables a tipo int
        iNumero1 = fOperando1;
        iNumero2 = fOperando2;

        fRes = iNumero1 % iNumero2;
        break;
    }
    return fRes;
}

bool pideSeguir()
{
    //Declaracion de variable
    char cRespuestaSeguir;

    while (cRespuestaSeguir != 'S' && cRespuestaSeguir != 's' && cRespuestaSeguir != 'N' && cRespuestaSeguir != 'n')
    {
        cout << "Teclea si quieres continuar la operacion (S/N): ";
        cin >> cRespuestaSeguir;
    }
    if (cRespuestaSeguir == 'S' || cRespuestaSeguir == 's')
    {
        return true;
    }
    else
        return false;
}

int main()
{
    //Declaracion de variables
    float fOperando1, fOperando2, fResultado;
    char cOperador;
    bool bSeguir;

    while (bSeguir)
    {
        //Mensaje de bienvenida
        cout << "Hola, soy una calculadora!" << endl;
        //Se pide el operando 1
        cout << "Teclea el operando 1: ";
        cin >> fOperando1;

        //Se llama a la funcion que pide el operador
        cOperador = pideOperador();

        //Se pide el operando 2
        cout << "Teclea el operando 2: ";
        cin >> fOperando2;

        //Se llama a la funcion que calcula el resultado
        fResultado = calcula(fOperando1, cOperador, fOperando2);

        //Se despliega el resultado de la operacion ennun cout
        cout << "El resultado de la operacion " << fOperando1 << " " << cOperador << " " << fOperando2 << " es " << fResultado << endl;

        //Se llama a la funcion que pregunta si se desea seguir
        bSeguir = pideSeguir();
    }
    //Se despliega que el programa ha terminado
    cout << "Fin del programa";
    return 0;
}
