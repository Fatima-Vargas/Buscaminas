#include "funciones.h"


//primera prueba
void prueba_suma_renglon()
{
    int matriz[5][5]={
        {8,1,6},
        {7,5,3},
        {4,9,2},
    };
    int resultado = suma_renglon(matriz, 3, 0);
    printf("La suma del renglon es: %d\n", resultado); //el resultado deberia ser 15
}

//segunda prueba
void prueba_suma_columna()
{
    int matriz[5][5]={
        {8,1,6},
        {7,5,3},
        {4,9,2},
    };
    int resultado = suma_columna(matriz, 3, 0);
    printf("La suma de la columna es: %d\n", resultado); //el resultado deberia ser 19
}

//tercera prueba
void prueba_suma_diagonal_principal()
{
    int matriz[5][5]={
        {8,1,6},
        {7,5,3},
        {4,9,2},
    };
    int resultado = suma_diagonal_principal(matriz, 3);
    printf("La suma de la diagonal principal es: %d\n", resultado); //el resultado deberia ser 15
}

//cuarta prueba
void prueba_suma_diagonal_secundaria()
{
    int matriz[5][5]={
        {8,1,6},
        {7,5,3},
        {4,9,2},
    };
    int resultado = suma_diagonal_secundaria(matriz, 3);
    printf("La suma de la diagonal secundaria es: %d\n", resultado); //el resultado deberia ser 15

}

//quinta prueba, verificar si hay repeticion

void prueba_revisar_repetido(){
     int matriz[5][5]={
        {8,1,6},
        {7,5,3},
        {4,9,2},
    };
    int resultado = revisar_repetido(matriz, 3);
    printf("Numeros repetidos %d\n", resultado);
}