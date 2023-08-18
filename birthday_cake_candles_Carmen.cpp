/*
    author: Carmen Hidalgo
    date: 08/16/2023
    description: solución de https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true
*/

#include <iostream>
#include <string>
#define CANTIDAD_CANDELAS 4

using namespace std;

int main()
{
    int numero_candelas[CANTIDAD_CANDELAS] = {2, 5, 5, 3};

    int mayor = numero_candelas[0]; //Se guarda el primer valor del arreglo
    int contador = 0;
	
	for (int indiceCandelas = 0; indiceCandelas < CANTIDAD_CANDELAS; indiceCandelas++){
		
        if (numero_candelas[indiceCandelas] > mayor)
            {
			mayor = numero_candelas[indiceCandelas]; //Si hay un valor mayor que el que está guardado actualmente, se reemplaza
            }
	}
    for (int indiceLista = 0; indiceLista < CANTIDAD_CANDELAS; indiceLista++){
            if (numero_candelas[indiceLista] == mayor)
            {
                contador++;
            }

            }

    cout << "Cantidad de Candelas grandes " << contador <<endl; 
}