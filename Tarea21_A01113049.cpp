/****************************************************************************************

 Archivo: Tarea21-A01113049.cpp
 Fecha: 27 de Marzo del 2015.
 Author: Luis Alfonso Rojo Sanchez (A01113049)

 Descripcion:
    Este programa lee dos archivos de texto, los junta y escribe el contenido en un nuevo archivo de texto.
 Análisis:
    * Entradas:
        Dos archivos de texto existente.
    * Procesos:
        Funciones
    * Salidas:
        Un nuevo archivo de texto con el contenido de los dos que se leyeron.
 Diseño:
    * Algoritmo:

    Se incluyen las librerias necesarias
    using namespace std;

    Funcion que lee los archivos
    {
        Variable del archvivo de salida

        Variable para el nombre del archivo en disco

        Variable para la cantidad de renglones inicializada en 0

        Se pide el nombre del archivo a leer
        Se lee el nombre del archivo a leer


        Se abre el archivo

        Si no exite el archivo
        {
            Se despliega que no se pudo leer el archivo
            Se cierra el programa
        }

        Cilo que obtiene el valor de iCantidad
        {
            Getline que obtiene cada renglon del archivo
            Se despliega que se lee el renglon n del archivo
            Se incrementa iCantidad
        }

        Ciclo for que esta en comentarios esta que comprueba, desplegando todos los renglones del arreglo
        {
            Se desppliega el contenido de n renglon
        }

        Se cierra el archivo
    }

    Funcion que junta los arrglos en un tercer arreglo
    {
        Se obtiene el valor de iCantidad3

        Ciclo for que suma el primer arreglo al tercer arreglo
        {
            arreglo3[i] = arreglo1[i];
        }

        Ciclo for que suma el segundo arreglo al tercer arreglo
        {
            arreglo3[iCantidad1 + i] = arreglo2[i];
        }
    }

    Funcion que imprime los arreglos
    {
        Ciclo for que imprime el arreglo en pantalla
        {
            Se despliega el elemento n del arreglo
        }
    }

    int escribirArchivo(string arreglo[], int cantidad)
    {
        Variable para el archivo de entrada

        Variable para el nombre del archivo en disco

        Se pide el nombre del archivo
        Se lee el nombre del archivo

        Se abre el archivo
        Si no es el archivo
        {
            Se despliega que no se pudo abrir el archivo
            Se cierra el programa
        }

        Ciclo for donde se escriben los valores en el archivo
        {
            Salto de linea
            Se despliega que se esta escribiendo el contenido del elemento n del arreglo
            Se ingresa el contenido en el archivo de texto
        }

        Se depliega que las paralabras han sido guardadas

        Se cierra el archivo
    }

    int main()
    {
        Mensaje de bienvenida

        Variable para la respuesta de si continuar

        Arreglos para guardar el contenido de los archivos

        Variables para las cantidades de nombres en los tres arreglos

        Ciclo para continuar hasta que el usuario ya no quiera seguir
        {
            Se despliega que se esta leyendo el primer archivo
            Se llama a la función para leer el primer archivo

            Se despliega que se esta leyendo el segundo archivo
            Se llama a la función para leer el segundo archivo

            Se llama a la función que junta los dos arreglos en uno solo

            Se depliega "El contenido del primer arreglo es: "
            Se llama a la funcion que imprime para el primer arreglo
            Se depliega "El contenido del segundo arreglo es: "
            Se llama a la funcion que imprime para el segundo arreglo
            Se depliega "El contenido del tercer arreglo es: "
            Se llama a la funcion que imprime para el tercer arreglo

            Se despliega que se esta escribiendo el archivo resultante de juntar los dos anteriores
            Se llama a la función que escribe el arreglo

            Otro ciclo para pedir y validar si el usuario quiere seguir o no
            {
                Se pide que si se quiere continuar
                Se lee la respuesta
                respuesta = tolower(respuesta)
            }mientras la respuesta no sea 'n' ni 's'

        }mientras la respuesta sea 's'

        Se despliega el final del programa
    }

****************************************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int leerArchivo(string arreglo[], int &iCantidad)
{
    //Variable del archvivo de salida
    ifstream archivo;

    //Variable para el nombre del archivo en disco
    string nombreArchivo;

    //Variable para la cantidad de renglones inicializada en 0
    iCantidad = 0;

    cout << "Teclea el nombre del archivo a leer: ";
    cin >> nombreArchivo;

    //Se abre el archivo
    archivo.open(nombreArchivo.c_str());
    if(!archivo)
    {
        cerr << "No se udo abrir el archivo!!!" << endl << endl;
        exit(EXIT_FAILURE);
    }

    //Se obtiene el valor de iCantidad
    while ( ! archivo.eof())
    {
            getline(archivo, arreglo[iCantidad]);
            cout << "Leyendo el renglon #" << iCantidad + 1 << " \'" << arreglo[iCantidad] << "\' ... " << endl;
            iCantidad++;
    }

    //Para comprobar, desplegamos todos los renglones del arreglo
    /*for(int i = 0; i < iCantidad; i++)
    {
        cout << "El renglon # " << i + 1 << ": " << arreglo[i] << endl;
    }*/

    //Se cierra el archivo
    archivo.close();
}

int juntarArreglos(string arreglo1[], int iCantidad1, string arreglo2[], int iCantidad2, string arreglo3[], int &iCantidad3)
{
    //Se obtiene el valor de iCantidad3
    iCantidad3 = iCantidad1 + iCantidad2;

    //Se suma el primer arreglo
    for(int i = 0; i < iCantidad1; i++)
    {
        arreglo3[i] = arreglo1[i];
    }

    //Se suma el segundo arreglo
    for(int i = 0; i < iCantidad2; i++)
    {
        arreglo3[iCantidad1 + i] = arreglo2[i];
    }
}

int imprimirArreglo(string arreglo[], int cantidad)
{
    for(int i = 0; i < cantidad; i++)
    {
        cout << arreglo[i] << endl;
    }
}

int escribirArchivo(string arreglo[], int cantidad)
{
    //Variable para el archivo de entrada
    ofstream archivo3;

    //Variable para el nombre del archivo en disco
    string nombreArchivo3;

    //Se pregunta por el nombre del archivo
    cout << "Teclea el nombre del archivo donde se va a escribir: ";
    cin >> nombreArchivo3;

    //Se abre el archivo
    archivo3.open(nombreArchivo3.c_str());
    if(!archivo3)
    {
        cerr << "No se pudo abrir el archivo!!!" << endl << endl;
        exit(EXIT_FAILURE);
    }

    //Se escriben los valores en el archivo
    for(int i = 0; i < cantidad; i++)
    {
        cout << endl;
        cout << "Escribiendo el renglon #" << i + 1 <<" en el archivo el cual es: " << arreglo[i] << " ...";
        archivo3 << arreglo[i] << endl;
    }

    cout << endl;
    cout << "\nListo!, tus paralabras han sido guardadas\n" << endl;

    //Se cierra el archivo
    archivo3.close();
}

int main()
{
    //Mensaje de bienvenida
    cout << "Hola! este programa lee dos archivos de texto y los copia a un nuevo archivo" << endl;

    // Variable para la respuesta de si continuar
    char r;
    // Arreglos para guardar el contenido de los archivos
    string arreglo1[1000], arreglo2[1000], arreglo3[1000];
    // Variables para las cantidades de nombres en los tres arreglos
    int cantidad1, cantidad2, cantidad3;

    // Ciclo para continuar hasta que el usuario ya no quiera seguir
    do {

        // Llamamos a la función para leer el primer archivo
        cout << "\nLeyendo el archivo # 1 ..." << endl;
        leerArchivo(arreglo1, cantidad1);
        // LLamamos a la función para leer el segundo archivo
        cout << "\nLeyendo el archivo # 2 ..." << endl;
        leerArchivo(arreglo2, cantidad2);

        // Llamamos a la función que junta los dos arreglos en uno solo
        juntarArreglos(arreglo1, cantidad1, arreglo2, cantidad2, arreglo3, cantidad3);

        // Imprimimos el contenido de los tres arreglos con la función que imprime
        cout << "\nEl contenido del primer arreglo es: " << endl;
        imprimirArreglo(arreglo1, cantidad1);
        cout << "\nEl contenido del segundo arreglo es: " << endl;
        imprimirArreglo(arreglo2, cantidad2);
        cout << "\nEl contenido del tercer arreglo es: " << endl;
        imprimirArreglo(arreglo3, cantidad3);

        // Llamamos a la función que escribe el arreglo
        cout << "\nEscribiendo el archivo resultante de juntar los dos anteriores ..." << endl;
        escribirArchivo(arreglo3, cantidad3);

        // Otro ciclo para pedir y validar si el usuario quiere seguir o no
        do {
            cout << "Quieres continuar (s/n)?: ";
            cin >> r;
            r = tolower(r);
        } while ((r != 's') && (r != 'n'));

    } while (r == 's');

    // Final del programa
    cout << "\nFin del programa!\n";
    return 0;
}
