/*************************************************************************
 Archivo: Tarea12_A01113049.cpp
 Fecha: 16 de Marzo del 2015.
 Autor: Luis Alfonso Rojo Sanchez (A01113049)

 Analisis:
    Entradas:
        Primer numero, segundo numero, ultimo numero.
    Procesos:
        3 funciones que calculan la SucesionFibonacci mediante for, while y do-while.
    Salidas:
        3 sucesiones Fibonacci con el mismo resultado.
 Diseno:
    Algoritmo:

    void seudoFibonacciFor(primer numero, segundo numero, ultimo numero)
    {
        Se despliega que es la serie de Fibonacci con For
        Se despliega el primer numero
        Se despliega el segundo numero

        for(iAcum = 0; iAcum < n; )
        {
            iAcum = num1 + num2
            num1 = num2
            num2 = iAcum

            if(iAcum <= n)
            {
            cout << " " << iAcum;
            }
        }
        cout << endl;
    }

    void seudoFibonacciWhile(primer numero, segundo numero, ultimo numero)
    {
        int iAcum = 0;

        Se despliega que es la serie de Fibonacci con For
        Se despliega el primer numero
        Se despliega el segundo numero

        while (iAcum <= n)
        {
            iAcum = num1 + num2;
            num1 = num2;
            num2 = iAcum;

            if(iAcum <= n)
            {
                cout << " " << iAcum;
            }
        }
        cout << endl;
    }

    void seudoFibonacciDo-While(primer numero, segundo numero, ultimo numero)
    {
        int iAcum = 0;

        Se despliega que es la serie de Fibonacci con For
        Se despliega el primer numero
        Se despliega el segundo numero


        do
        {
            iAcum = num1 + num2;
            num1 = num2;
            num2 = iAcum;

            if(iAcum <= n)
            {
                cout << " " << iAcum;
            }
        }
        while(iAcum <= n);
    }

     main
     {
        //Mensaje de bienvenida

        //Declaracion de variables
        primerNum, segundoNum, ultimoNum

        //Se pide el primer numero
        do
        {
            Se pide el primer numero
            Se lee el primer numero
        }
        while(primer numero <= 0);

        //Se pide el segundo numero
        do
        {
            Se pide el segundo numero
            Se lee el segundo numero
        }
        while(segundo numero <= primer numero);

        //Se pide el ultimo numero
        do
        {
            Se pide el ultimo numero
            Se lee el ultimo numero
        }
        while(ultimo numero <= segundo numero)

        //Se llama a las funciones
        seudoFibonacciFor(primer numero, segundo numero, ultimo numero);
        seudoFibonacciWhile(primer numero, segundo numero, ultimo numero);
        seudoFibonacciDo-While(primer numero, segundo numero, ultimo numero);

        //Terminamos el programa
        Se despliega "Fin del programa!";
     }
*************************************************************************/

#include <iostream>
using namespace std;

// Funcion que imprime la serie de seudo fibonaci con FOR
void seudoFibonacciFor(int num1, int num2, int n)
{
    cout << "La serie de Fibonacci con      FOR es:";
    cout << " " << num1;
    cout << " " << num2;

    for(int iAcum = 0; iAcum <= n;)
    {
        iAcum = num1 + num2;
        num1 = num2;
        num2 = iAcum;

        if(iAcum <= n)
        {
            cout << " " << iAcum;
        }
    }
    cout << endl;
}

// Funcion que imprime la serie de seudo fibonaci con WHILE
void seudoFibonacciWhile(int num1, int num2, int n)
{
    int iAcum = 0;

    cout << "La serie de Fibonacci con    WHILE es:";
    cout << " " << num1;
    cout << " " << num2;

    while (iAcum <= n)
    {
        iAcum = num1 + num2;
        num1 = num2;
        num2 = iAcum;

        if(iAcum <= n)
        {
            cout << " " << iAcum;
        }
    }
    cout << endl;
}

// Funcion que imprime la serie de seudo fibonaci con DO-While
void seudoFibonacciDoWhile (int num1, int num2, int n)
{
    int iAcum = 0;

    cout << "La serie de Fibonacci con DO-WHILE es:";
    cout << " " << num1;
    cout << " " << num2;

    do
    {
        iAcum = num1 + num2;
        num1 = num2;
        num2 = iAcum;

        if(iAcum <= n)
        {
            cout << " " << iAcum;
        }
    }
    while(iAcum <= n);
}


int main ()
{
    //Mensaje de bienvenida
    cout << "Hola!, este programa calcula la Sucecion Fibonacci con numeros que le das tu." << endl;
    cout << endl;

    // Declaracion de varialbes
    int primerNum, segundoNum, ultimoNum;

    // Pide el primer numero
    do
    {
        cout << "Escribe el PRIMER numero (entero positivo):" << endl;
        cin >> primerNum;
    }
    while (primerNum <= 0);

    // Pide el segundo numero mayor al primero ... agregar aqui el codigo
    do
    {
        cout << "Escribe el SEGUNDO numero (entero mayor que el primero):" << endl;
        cin >> segundoNum;
    }
    while (segundoNum <= primerNum);

    // Pide el ultimo nœmero mayor al segundo ... agregar aqui el codigo
    do
    {
        cout << "Escribe el hasta QUE NUMERO DEBE LLEGAR (entero mayor que el segundo):" << endl;
        cin >> ultimoNum;
    }
    while (ultimoNum <= segundoNum);

    cout << endl;

    // Llamamos a la funcion
    seudoFibonacciFor(primerNum, segundoNum, ultimoNum);
    seudoFibonacciWhile(primerNum, segundoNum, ultimoNum);
    seudoFibonacciDoWhile(primerNum, segundoNum, ultimoNum);

    // Terminamos el programa
    cout << endl;
    cout << endl << "Fin del programa!" << endl;
    return 0;
}
