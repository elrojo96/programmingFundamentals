/****************************************************************************************

 Archivo: Tarea19_A01113049.cpp
 Fecha: 20 de Abril del 2015
 Author: Luis Alfonso Rojo Sanchez (A01113049)

 Descripcion:
    Este programa pide una mensaje y determina si es palindrome o no.
    * Entradas:
        Mensaje
    * Procesos:
        Funcion que termina si el mensjae el palindrome o no.
    * Salidas:
        Mensaje palindrome o no.
 Diseño:
    * Algoritmo:
	Se incluyen las bibliotecas iostream y string

	Funcion booleana que determina si el mensaje es palindrome o no
	{
	    Declaracion de variable booleana
	    bool valor
	    Declaracion de mensaje al reves
	    string sAlReves
	    Declaracion de la vairable del tamano del mensaje
	    int iTamano

	    Se obitene la cantidad de caracteres del mensaje con la funcion length

	    Ciclo for que transfiere el mensaje al reves a la variable string sAlReves
	    {
	        sAlReves = sAlreves + mensaje[i]
	    }

	    Condicion que compara si los dos mensajes son iguales
	    {
	        Si los mensajes son iguales la variable "valor" tomar el valor de true
	    }else Condicion que compara si los dos mensajes no son iguales
	    {
	        Si los mensajes noson iguales la variable "valor" tomar el valor de false

	    }

	    Retorno de la variable "valor"
	}

	int main()
	{
	    Mensaje de bienvenida

	    Se declaran variables
	    sMensaje
	    iCantidad

	    Se pide el mensaje a verificar si es palindrome
	    Se lee el mensaje a verificar si es palindrome

	    Se obtiene la cantidad de caracteres del mensaje on la funcion .length


	    Se borran los espacios del mensaje con un ciclo for
	    {
	        Condicion que se cumple cuando el caracter en ese casillero es un espacio
	        {
	            Se borra el espacio del mensaje
	        }
	    }

	    Ciclo for que convierte todas las letras del mensaje a minusculas
	    {
	        Letra = tolower(letra[i])
	    }

	  	Condicion que llama a la funcion ingresando como variable el mensaje
	    {
	        Si el valor de retorno es true se despliega que es palindrome
	    }else
	    {
			Si el valor de retorno es false se despliega que no es palindrome
	    }
	}
****************************************************************************************/

#include <iostream>
#include <string>

using namespace std;

//Funcion que determina si el mensaje es palindrome o no
bool palindrome(string mensaje)
{
    //Declaracion de variable booleana
    bool valor;
    //Declaracion de mensaje al reves
    string sAlReves;
    //Declaracion de la vairable del tamano del mensaje
    int iTamano;

    //Se obitene la cantidad de caracteres del mensaje
    iTamano = mensaje.length();

    //Ciclo for que transfiere el mensaje al reves a otra variable string
    for(int i = (iTamano - 1); i >= 0; i--)
    {
        sAlReves += mensaje[i];
    }

    //Condicion que compara los dos mensajes
    if(sAlReves == mensaje)
    {
        //Si los mensajes son iguales la variable "valor" tomar el valor de true
        valor = true;
    }
    else if(sAlReves != mensaje)
    {
        //Si los mensajes no son iguales la variable "valor" tomar el valor de false
        valor = false;
    }

    //Retorno del valor
    return valor;
}

int main()
{
    //Mensaje de bienvenida
    cout << "Hola, este programa comprueba si un mensaje es palindrome!" << endl;
    cout << endl;

    //Declaracion de variables
    string sMensaje;
    int iCantidad;

    //Se pide y se lee el mensjae
    cout << "Teclea el mensaje a verificar si es palindrome: ";
    getline(cin, sMensaje);

    //Se obtiene la cantidad de caracteres del mensaje
    iCantidad = sMensaje.length();

    //Se borran los espacios del mensaje
    for(int i = 0; i < iCantidad - 1 ; i++)
    {
        if(sMensaje[i] == ' ')
        {
            sMensaje.erase(i,1);
        }
    }

    //Ciclo for que convierte todas las letras a minusculas
    for(int i = 0; i < iCantidad; i++)
    {
        sMensaje[i] = tolower(sMensaje[i]);
    }

    //Se llama a la funcion, y se imprime si es palindrome o no lo es
    if(palindrome(sMensaje))
    {
        cout << endl;
        cout  << "El mensaje es palindrome!" << endl;
    }
    else
    {
        cout << endl;
        cout << "El mensaje no es palindrome!" << endl;
    }
    return 0;
}
