#include "funciones.h"
//declaraciones de la funciones y su implementacion

//funcion 1

int suma_renglon(int matriz[][5], int n, int renglon) //devuelve un entero// //recibe la matriz// //indica si trabajamos en 3x3 o 5x5// //indica que renglon queremos sumar//
{
    int suma = 0;  //empezamos la suma en cero//

    for (int i = 0; i < n; i++)   //se recorren las columnas del renglon//
    {

        suma = suma + matriz[renglon][i];
    }
    return suma; //devuelve el resultado//
}

//funcion dos

int suma_columna(int matriz[][5], int n, int columna) //matriz = la nuestra, n=tamano de la matriz 3x3 o 5x5, columna= cual columna queremos sumar, int suma_columna= funcion que devuelve la suma
{
    int suma = 0;
    for (int i = 0; i < n; i++) //recorren los renglones de las columnas
    {
        suma = suma + matriz[i][columna];  //i cambia de renglon, columna=permanece fija
    }
    return suma;

}

//funcion tres

int suma_diagonal_principal(int matriz[][5], int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma = suma + matriz[i][i];
    
    }
    return suma;

}

//funcion cuatro

int suma_diagonal_secundaria(int matriz[][5], int n)
{
    int suma = 0;
    for(int i = 0; i < n; i++)
    {
        suma = suma + matriz[i][n-1-i];
    }
    return suma;
}

//funcion cinco, verificar que no haya numeros repetidos

int revisar_repetido(int matriz[][5], int n) 
{
int repetido = 0;
for(int i=0; i<n; i++)
{
    for(int j=0; j < n; j++)
    {
        for(int k=0; k<n;k++)
        {
            for(int l=0; l<n; l++)
            {
                if((i !=k || j !=l) && matriz[i][j]==matriz[k][l]){
                    repetido = 1;
                }
            }
        }
    }
}
    return repetido;
}