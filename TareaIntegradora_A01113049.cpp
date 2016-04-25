/****************************************************************************************

 Archivo: TareaIntegradora_A01113049.cpp
 Fecha: 4 de Abril del 2015.
 Author: Luis Alfonso Rojo Sanchez (A01113049)

 Descripcion:
    Este programa calcula las calificaciones finales de un listado de alumnos.
 Análisis:
    * Entradas:
        4 archivos de texto, nombres y calificaciones parciales.
    * Procesos:
        Funciones que leen nombres y calificaciones parciales, obtiene la califcacion final.
    * Salidas:
         Archivo con la calificacion final con el nombre del alumno correspondiente.
 Diseño:
    * Algoritmo:
    Se incluye la biblioteca iostream
    Se incluye la biblioteca string
    Se incluye la biblioteca fstream
    Se incluye la biblioteca cstdlib
    Se incluye la biblioteca iomanip

    Funcion void que lee los nombres de los alumnos por renglones
    {
        Variable del archivo de salida

        Variable para el nombre del archivo en el disco

        Inicializacion de "cantidad" a 0

        Se pide el archivo a leer
        Se lee el archivo a leer

        Se abre el archivo
        Si no es el archivo
        {
            Se despliega que no se pudo abrir el archivo
            Se cierra el programa
        }

        Salto de linea
        Mientras el archivo no se acabe
        {
            Se guarda todo el renglon en la posicion n del arreglo
            Se despliega que se esta leyendo el alumno n del archivo
            Se incrementa la variable "cantidad" mas uno
        }

        Se cierra el archivo

        Se despliega que se han terminado de guardar los nombres de los alumnos
    }

    Funcion void que lee las calificaciones renglon por renglon
    {
        Variable del archivo de salida

        Variable para el nombre del archivo en el disco

        Inicializacion de "cantidad" a 0

         Se pide el nombre del archivo a leer
         Se lee el nombre del archivo a leer

        Salto de linea

        Se abre el archivo
        Si no es el archivo
        {
            Se despliega que no se pudo leer el archivo
            Se cierra el programa
        }

        Mientras el archivo no se termine
        {
            Se ingresa la calificacion al elemento n del arreglo
            Se despliega que se esta leyendo la calificacion n del archivo
            Se incrementa la variable "cantidad" mas uno
        }

        Se cierra el archivo

        Se despliega que las calificaciones del parcial n han sido guardadas

        Se incrementa la variable por parametro mas uno
    }

    Funcion void que promedia las tres calificaciones y las regresa en el arreglo float
    {
        Ciclo for que promedia las tres calificaciones
        {
            Variable que es igual a la suma de las tres calificaciones
            El arreglo float es igual a la suma entre 3
        }
    }

    Funcion que crea el archivo final con las calificaciones finales y los nombres de los alumnos
    {
        Variable del archivo de entrada

        Variable para el nombre del archivo en el disco

        Se pide el nombre del archivo a leer
        Se lee el nombre del archivo a leer

        Salto de linea

        Se abre el archivo
        Si no es el archivo
        {
            Se despliega que no se pudo abrir el archivo
            Se cierra el programa
        }

        Se despliega que se estan escribiendo los nombres y las calificaciones
        Se despliega el mensaje "Calificacion - nombre"
        Ciclo for que escribe las calificaciones y nombres en el archivo
        {
            Se despliega que se esta escribiendo el alumno n con su calificacion
            Se escribe el alumno con su calificacion final en el archivo
        }

        Se cierra el archivo

        Se despliega que las calificaciones y nombres han sido guardadas
    }


    {
        Se despliega el mensaje de bienvenida

        Arreglo para guardar los nombres

        Arreglos para guardar las calificaciones de los parciales

        Arreglo para guardar las calificaciones promedio

        Variable para la cantidad de renglones

        Variable para desplegar que parcial es, teniendo el valor inicial de 1

        Funcion que lee el archivo con los nombres de los alumnos

        Funcion que lee las calificaciones del parcial 1
        Funcion que lee las calificaciones del parcial 2
        Funcion que lee las calificaciones del parcial 3

        Funcion que obtiene el promedio de las tres calificaciones

        Funcion que crea el archivo de nombres con calificaciones promedio

        Se despliega el fin del programa
    }
****************************************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void leeNombres(string arreglo[], int &cantidad)
{
	//Variable del archivo de salida
	ifstream archivo;

	//Variable para el nombre del archivo en el disco
	string nombreArchivo;

	//Inicializacion de "cantidad" a 0
	cantidad = 0;

	//Se pide el archivo a leer
	cout << "\nTeclea el nombre del archivo de alumnos a leer: \n";
	cin >> nombreArchivo;

	//Se abre el archivo
	archivo.open(nombreArchivo.c_str());
	if(!archivo)
	{
		cerr << "\nNo se pudo abrir el archivo a leer!\n";
		exit(EXIT_FAILURE);
	}

	//Se obtiene el valor de iCantidad (como parametro) y se pasan los nombres al arreglo
	cout << endl;
	while(getline(archivo, arreglo[cantidad]))
	{
		cout << "Leyendo el alumno #" << cantidad + 1 << "\ '" << arreglo[cantidad] << "\' ... " << endl;
	    cantidad++;
    }

    //Se cierra el archivo
    archivo.close();

    //Mensaje de finalizado
    cout << "\nListo!, tus nombres han sido guardados.\n";
}

void leeCalificaciones(int arreglo[], int cantidad, int &parcial)
{
    //Variable del archivo de salida
    ifstream archivo;

    //Variable para el nombre del archivo en el disco
    string nombreArchivo;

    //Inicializacion de "cantidad" a 0
	cantidad = 0;

    //Se pide el archivo a leer
    cout << "\nTeclea el nombre del archivo del parcial " << parcial << " de calificaciones a leer: \n";
    cin >> nombreArchivo;

    //Salto de linea
    cout << endl;

    //Se abre el archivo
    archivo.open(nombreArchivo.c_str());
    if(!archivo)
    {
        cerr << "\nNo se pudo abrir el archivo a leer!\n";
        exit(EXIT_FAILURE);
    }

    //Se obtienen las calificaciones
    while(archivo >> arreglo[cantidad])
    {
        cout << "Leyendo la calificacion " << cantidad + 1 << "\ '" << arreglo[cantidad] << "\' ... " << endl;
        cantidad++;
    }

    //Se cierra el archivo
    archivo.close();

    //Mensaje de finalizado
    cout << "\nListo!, tus calificaciones del parcial " << parcial << " han sido guardadas.\n";

    //Se incrementa la variable por parametro
    parcial++;
}

void creaPromedio(int arreglo1[], int arreglo2[], int arreglo3[], float arregloFinal[], int cantidad)
{
    //Ciclo for que promedia las tres calificaciones
    for(int i = 0; i < cantidad; i++)
    {
        float a = arreglo1[i] + arreglo2[i] + arreglo3[i];
        arregloFinal[i] = a / 3;
    }
}

void creaArchivoFinal(string nombres[], float calificaciones[], int cantidad)
{
    //Variable del archivo de entrada
    ofstream archivo;

    //Variable para el nombre del archivo en el disco
    string nombreArchivo;

    //Se pide el archivo a leer
    cout << "\nTeclea el nombre del archivo para escribir los nombres con su califcacion final: \n";
    cin >> nombreArchivo;

    //Salto de linea
    cout << endl;

    //Se abre el archivo
    archivo.open(nombreArchivo.c_str());
    if(!archivo)
    {
        cerr << "No se pudo abrir el archivo!" << endl;
        exit(EXIT_FAILURE);
    }

    //Se escriben los nombres
    cout << "Escribiendo nombres y calificaciones:" << endl;
    archivo << "Calificacion - Nombre:" << endl;
    for(int i = 0; i < cantidad; i++)
    {
        cout << "Escribiendo el alumno #" << i + 1 << " con su calificacion" << endl;

        if( i == cantidad - 1)
        {
            archivo << setprecision(3) << calificaciones[i] << " - " << nombres[i];
        }
        else
        {
            archivo << setprecision(3) << calificaciones[i] << " - " << nombres[i] << endl;
        }
    }

    //Cerramos el archivo
    archivo.close();

    cout << "\nListo!, los nombres y calificaciones han sido guardadas.\n";
}

int main()
{
    //Mensaje de bienvenida
    cout << "\nHola, este programa calcula las calificaciones finales de una lista de alumnos.\n";

    //Arreglo para guardar los nombres
    string ArregloNombres [1000];

    //Arreglos para guardar las calificaciones de los parciales
    int ArregloPrimerParcial [1000];
    int ArregloSegundoParcial[1000];
    int ArregloTercerParcial [1000];

    //Arreglo para guardar las calificaciones promedio
    float ArregloCalificacionesPromedio[1000];

    //Variable para la cantidad de renglones
    int iCantidad;

    //Variable para desplegar que parcial es
    int iVariableParcial = 1;

    //Funcion que lee el archivo con los nombres de los alumnos
    leeNombres(ArregloNombres, iCantidad);

    //Funcion que lee los tres archivos de calificaciones

    leeCalificaciones(ArregloPrimerParcial, iCantidad, iVariableParcial);
    leeCalificaciones(ArregloSegundoParcial, iCantidad, iVariableParcial);
    leeCalificaciones(ArregloTercerParcial, iCantidad, iVariableParcial);

    //Funcion que obtiene el promedio de las tres calificaciones
    creaPromedio(ArregloPrimerParcial, ArregloSegundoParcial, ArregloTercerParcial, ArregloCalificacionesPromedio, iCantidad);

    //Funcion que crea el archivo de nombres con calificaciones promedio
    creaArchivoFinal(ArregloNombres, ArregloCalificacionesPromedio, iCantidad);

    //Fin del programa
    cout << "\nFin del programa!\n";

    return 0;
}
