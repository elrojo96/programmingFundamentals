/****************************************************************************************

 Archivo: Tarea18_A01113049.cpp
 Fecha: 16 de Abril del 2015.
 Author: Luis Alfonso Rojo Sanchez (A01113049)

 Descripcion:
    Este programa pide una matriz de n tamaño para luego sacarle la transpuesta.
    * Entradas:
        Tamaño de la matriz y los valores de la matriz.
    * Procesos:
        Funcion que mediante ciclos for y otra matriz saca la transpuesta a la matriz original.
    * Salidas:
        Matriz transpuesta.
 Diseño:
    * Algoritmo:

    void transpuestaMatriz(int m[100][100], int t)
    {
        Se declara otra matriz local: int iMatLocal [100][100]

        Ciclo dor que saca la transpuesta de la matriz a la matriz local de la funcion
        for(int i = 0; i < t; i++)
        {
            for(int j = 0; j < t; j++)
            {
                La matriz local es igual a la matriz original con las coordenadas invertidas
            }
        }

        Ciclo for que copia la matriz local de la funcion ya transpuesta a la matriz original del main
        for(int i = 0; i < t; i++)
        {
            for(int j = 0; j < t; j++)
            {
                La matriz original es igual a la matriz local
            }
        }
    }

    int main()
    {
        Declaración de variables
        Variable para guardar la matriz y ahí mismo su inversa: int mat[100][100]
        Variable que indicará el tamaño de las matrices: int tam
        Variable para guardar la respuesta del usuario de que si quiere continuar: char r

        Salto de linea

        Ciclo para seguir pidiendo más números hasta que el usuario ya no quiera seguir: do {
            Ciclo para pedir y validar la cantidad: do {
                Se pide el tamaño de las matrices cuadradas
                Se lee el tamaño de las matrices cuadradas
            } while ((tam > 1000) || (tam < 1));

            Se piden los datos de la matriz a transponer
            Se despliega que se tecleen los valores para la matriz
            for(int i = 0; i < tam; i++)
            {
                for(int j = 0; j < tam; j++)
                {
                    Se despliegan las coordenadas de el elemento de la matriz
                    Se lee el valor del elemento de la matriz
                }
            }

            Se llama a la funcion que saca la transpuesta: transpuestaMatriz(mat, tam);

            Se despliega que van a ser desplegados los valores de la matriz original yatranspuesta
            for(int i = 0; i < tam; i++)
            {
                for(int j = 0; j < tam; j++)
                {
                    Se despliegan las coordenas del elemento de la matriz y su valor
                }
            }

            Otro ciclo para pedir y validar si el usuario quiere seguir o no: do {
                Se despliega que si se quiere dar otra lista de numeros
                Se lee la respuesta (s o n)
                Se convierte la respuesta a minúscula
            } while ((r != 's') && (r != 'n'));
        } while (r == 's');

        Se despliega el final del programa
    }
***************************************************************************************/

#include <iostream>
using namespace std;

void transpuestaMatriz(int m[100][100], int t)
{
    //Se declara otra matriz local
    int iMatLocal [100][100];

    //Se saca la transpuesta de la matriz a la matriz local de la funcion
    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < t; j++)
        {
            iMatLocal[i][j] = m[j][i];
        }
    }

    //Se copia la matriz local de la funcion ya transpuesta a la matriz original del main
    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < t; j++)
        {
            m[i][j] = iMatLocal[i][j];
        }
    }
}

int main()
{
    // Declaración de variables
    int mat[100][100];                   // Variable para guardar la matriz y ahí mismo su inversa
    int tam;                             // Variable que indicará el tamaño de las matrices
    char r;                              // Variable para guardar la respuesta del usuario de que si quiere continuar

    //Mensaje de bienvenida
    cout << "Hola! este programa saca la transpuesta de una matriz cuadrada que le des." << endl;

    cout << endl;

    // Ciclo para seguir pidiendo más números hasta que el usuario ya no quiera seguir
    do {
        // Ciclo para pedir y validar la cantidad
        do {
            cout << "Dame el tamano de las matrices cuadradas: ";
            cin >> tam;
        } while ((tam > 1000) || (tam < 1));

        cout << endl;

        //Se piden los datos de la matriz a transponer
        cout << "Teclea los valores para la matriz: " << endl;
        for(int i = 0; i < tam; i++)
        {
            for(int j = 0; j < tam; j++)
            {
                cout << "[" << i << "][" << j << "]: ";
                cin >> mat[i][j];
            }
        }

        //Se llama a la funcion que saca la transpuesta
        transpuestaMatriz(mat, tam);

        cout << endl;

        //Se imprime la matriz que regresa la funcion ya transpuesta
        cout << "Los valores volteados de la matriz: " << endl;
        for(int i = 0; i < tam; i++)
        {
            for(int j = 0; j < tam; j++)
            {
                cout << "[" << i << "][" << j << "]: " << mat[i][j] << endl;
            }
        }

        cout << endl;

        // Otro ciclo para pedir y validar si el usuario quiere seguir o no
        do {
            cout << "Quieres dar otra lista de numeros (s/n)?: ";
            cin >> r;
            r = tolower(r);
            cout << endl;
        } while ((r != 's') && (r != 'n'));
    } while (r == 's');

    // Final del programa
    cout << "Fin del programa!";

    cout << endl;

    return 0;
}
