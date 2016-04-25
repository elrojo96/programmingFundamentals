/****************************************************************************************

 Archivo: Tarea20-A01113049.cpp
 Fecha: 23 de Marzo del 2015.
 Author: Luis Alfonso Rojo Sanchez (A01113049)

 Descripcion:
    Este programa guarda un arreglo de numeros en un archivo
 Análisis:
    * Entradas:
        Arreglo de numeros.
    * Procesos:
        Inputs, ciclos for y funciones que hacen escribir valores en el archivo de texto.
    * Salidas:
        Un archivo de texto con un arreglo de numeros, estos numeros estan separados por renglones.
 Diseño:
    * Algoritmo:
        Se incluye la libreria iostream
        Se incluye la libreria string
        Se incluye la libreria fstream
        Se incluye la libreria cstdlib

        Funcion main
        {
            Variable que es la cantidad de calificaciones que se van a teclear

            Arreglo donde se van a guardar las calificaciones ingresadas

            Variable del archivo de salida

            Variable para el nombre del archivo en disco

            Variable para volver a realizar el proceso

            Mensaje de bienvenida

            Ciclo para continuar hasta que al usuario le de flojera seguir dando una lista de numeros
            {
                Se pide la cantidad de numeros que se van a teclear
                Se lee la cantidad de numeros que se van a teclear

                Salto de linea

                Se pide la lista de calificaciones en un ciclo for
                {
                    Se despliega que se ingrese la cantidad
                    Se lee la cantidad ingresada
                }

                Salto de linea

                Se pide el nombre del archivo a escribir
                Se lee el nombre del archivo a escribir

                Salto de linea

                Se abre el archivo
                Si el nombre no es igual
                {
                    cSe despliega que no se pudo abrir el archivo de numeros
                    Se sale del archivo
                }

                Ciclo for donde se escriben los numeros en el archivo
                {
                    Se despliega que se esta escribiendo el numero en la posicion #i del arreglo el cual es iArreglo[i]
                    Se ingresa el numero al archivo junto con un salto de linea
                }

                Salto de linea

                Se despliega que han sido guardados los numeros en el archivo de texto

                Salto de linea

                Se cierra el archivo

                Se crea otro ciclo para comprobar si el usuario quiere volver a realizar la operacion
                {
                    Se pide que se teclee si quieres volver a dar una lista de numeros
                    Se lee que se teclee si quieres volver a dar una lista de numeros
                    Uso de tolower
                }mientras la respuesta no sea 's' o 'n'

                }mientras la respuesta sea s

                Se despliega el final del programa

                Salto de linea
            }

***************************************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
	//Variable que es la cantidad de calificaciones que se van a teclear
	int iCantidad;

	//Arreglo donde se van a guardar las calificaciones ingresadas
	int iArreglo[1000];

	//Variable del archivo de salida
	ofstream archivoNumeros;

	//Variable para el nombre del archivo en disco
	string nombreArchivoNumeros;

	//Variable para volver a realizar el proceso
	char iRespuesta;

	//Mensaje de bienvenida
	cout << "Hola!, este programa ingresa a un archivo de texto una lista de numeros" << endl;

	//Ciclo para continuar hasta que al usuario le de flojera seguir dando una lista de numeros
	do{
		//Se pide la cantidad de numeros que se van a teclear
		cout << endl;
		cout << "Teclea la cantidad de numeros a ingresar: ";
		cin >> iCantidad;

        //Salto de linea
		cout << endl;

		//Se pide la lista de calificaciones
		for(int i = 0; i < iCantidad; i++)
		{
			cout << "Teclea la cantidad " << i + 1 << ": ";
			cin >> iArreglo[i];
		}

		//Salto de linea
		cout << endl;

		//Se pide el nombre del archivo a escribir
		cout << "Teclea el nombre del archivo a escribir los numeros: ";
		cin >> nombreArchivoNumeros;

		//Salto de linea
		cout << endl;

		//Se abre el archivo
		archivoNumeros.open(nombreArchivoNumeros.c_str());
		if(!archivoNumeros)
		{
			cerr << "No se pudo abrir el archivo de numeros!" << endl;
			exit(EXIT_FAILURE);
		}

		//Escribimos los numeros en el archivo
		for(int i = 0; i < iCantidad; i++)
		{
			cout << "Escribiendo el numero en la posicion #" << i << " del arreglo el cual es " << iArreglo[i] << "..." << endl;
			archivoNumeros << iArreglo[i] << endl;
		}

        //Salto de linea
		cout << endl;

		//Se despliega que han sido guardados los numeros en el archivo de texto
		cout << "Listo!, tus numeros han sido guardados en el archivo de texto" << endl;

		//Salto de linea
		cout << endl;

		//Cerramos el archivo
		archivoNumeros.close();

		//Se crea otro ciclo para comprobar si el usuario quiere volver a realizar la operacion
		do{
			cout << "Teclea si quieres volver a dar una lista de numeros (s/n): ";
			cin >> iRespuesta;
			iRespuesta = tolower(iRespuesta);
		}while((iRespuesta != 's') && (iRespuesta != 'n'));

	}while(iRespuesta == 's');

	//Se despliega el final del programa
	cout << endl;
	cout << "Fin del programa!";

	cout << endl;

    return 0;
}
