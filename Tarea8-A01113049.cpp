/****************************************************************************************

 Archivo: Tarea8-A01113049.cpp
 Fecha: 2 de Marzo del 2015.
 Author: Luis Alfonso Rojo Sanchez (A01113049)

 Descripcion:
    Este programa es una calculadora que realiza operaciones aritmeticas.
 Análisis:
    * Entradas:
        2 valores numericos y un operador
    * Procesos:
        Estatuto Switch que realiza las operaciones y ciclos y condiciones que dterminar si se sigue realizando operaciones.
    * Salidas:
        Valor de la operacion realizada.
 Diseño:
    * Algoritmo:
        Se incluye la libreria cmath tambien.

        Se declaran las variables.

        Se inicializan dos variables con valor de True.

        Mensaje de bienvenida.

        Ciclo que contiene el resto del algoritmo.
        {
            Se inicializa una vairable con valor de True.

            Se preguntan por los valores numericos y el operador.

            Estatuto Switch
            {
                Caso de la suma.
                Caso de la resta.
                Caso de la division.
                Caso de la multiplicacion.
                Caso de la exponenciacion.
                Caso del residuo.

                Si no coincide el operador, se despliega que es incorrecto.
            }

            Se despliega el resultado de la operacion.
            if operador = +, -, /, *, E, o R,
            {
                Se despliega el resultado de la operacion.
            }else
            No se puede desplegar el resultado.

            condicion que se ejecuta mientras bResp sea True
            {
                Se hace la pregunta si desea continuar

                if (cRespuestaC == 's' || cRespuestaC == 'n')
                {
                    bResp = False
                } else bResp = True

            if (cRespuestaC == 's')
            {
                bLoop = True
            }else bLoop = False
            }
        }
***************************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Se declaran las variables
    float fNumero1, fNumero2, fResultado;
    char cOperador, cRespuestaC;
    bool bLoop, bResp;

    bLoop = true;
    bResp = true;

    //Mensaje de bienvenida
    cout << "Hola!, soy una calculadora. A continuacion podras realizar un calculo:" << endl;
    cout << " " << endl;
    cout << "Puedes realizar operaciones como: Suma (+), Resta (-), Division (/)," << endl;
    cout << "Multiplicacion (*), Exponenciar (E) y obtener Residuo (R)." << endl;
    cout << " " << endl;

    //Ciclos y condiciones que reliza el programa
    while (bLoop)
    {
        bResp = true;

        //Se preguntan los valores
        cout << "Teclea el primer valor: ";
        cin >> fNumero1;
        cout << "Teclea el operador: ";
        cin >> cOperador;
        cout << "Teclea el segundo valor: ";
        cin >> fNumero2;

        //Se realiza la operacion dependiendo del operador
        switch (cOperador)
        {
        case '+':
            fResultado = fNumero1 + fNumero2;
            break;
        case '-':
            fResultado = fNumero1 - fNumero2;
            break;
        case '/':
            fResultado = fNumero1 / fNumero2;
            break;
        case '*':
            fResultado = fNumero1 * fNumero2;
            break;
        case 'E':
            fResultado = pow(fNumero1, fNumero2);
            break;
        case 'R':
            int rNumero1, rNumero2;
            rNumero1 = fNumero1;
            rNumero2 = fNumero2;
            fResultado = rNumero1 % rNumero2;
            break;
        default:
            cout << "El operador ingresado no es correcto!" << endl;
        }

        //Se despliega el resultado de la operacion
        if (cOperador == '+' || cOperador == '-' || cOperador == '/' || cOperador == '*' || cOperador == 'E' || cOperador == 'R')
        {
            cout << "La operacion da como resultado: " << fNumero1 << " " << cOperador << " " << fNumero2 << " = " << fResultado << endl;
        }
        else cout << "No se puede desplegar el resultado!" << endl;

        while(bResp)
        {
            //Se pregunta si se desea continuar
            cout << "Deseas continuar (S/N) ?: ";
            cin >> cRespuestaC;
            cRespuestaC = tolower(cRespuestaC);
            if (cRespuestaC == 's' || cRespuestaC == 'n')
            {
                bResp = false;
            }
            else
                bResp == true;
        }
        if (cRespuestaC == 's')
        {
            bLoop = true;
        }
        else
            bLoop = false;
    }
    return 0;
}
