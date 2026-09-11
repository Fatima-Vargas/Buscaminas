#include  "funciones.h"
//main

int main()
{
    int n;

    printf("Ingresa el tamano de la matriz, 3 o 5:");
    scanf("%d", &n);

    int matriz[5][5];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("Ingresa el valor [%d][%d]", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int constante = (n*(n*n+1))/2;
    int es_magico = 1;

    for(int i = 0; i<n; i++)
    {
        int suma = suma_renglon(matriz, n, i);
        if(suma !=constante){
            printf("El renglon %d no cumple con la constante magica.\n",i);
            es_magico = 0;
        }
    }

    for(int j = 0; j<n; j++)
    {
        int suma = suma_columna(matriz, n, j);
        if(suma !=constante){
            printf("La columna %d no cumple con la constante magica.\n",j);
            es_magico = 0;
        }
    }

    int suma= suma_diagonal_principal(matriz,n);
    if(suma != constante)
    {
        printf("La diagonal principal no cumple con la constante magica.\n");
        es_magico = 0;
    }

     suma = suma_diagonal_secundaria(matriz, n);  //ya no se puso int en suma porque suma ya la declaramos arriba
    if(suma != constante){
        printf("La diagonal secundaria no cumple con la constante magica.\n");
        es_magico = 0;
    }

    int repetido = revisar_repetido(matriz, n);
    if(repetido == 1)
    {
        printf("Hay numeros repetidos.\n");
        es_magico = 0;          //si encontramos cualquier problema si no es magico es_magico = 0;//
    }

    
    if(es_magico == 1)
    {
        printf("Es un cuadro magico.\n");
    }
    else
    {
        printf("No es un cuadro magico.\n");
    }
    
    
    return 0;

    //ORDEN
    //Pedir tamano
    // Pedir matriz
    //calcular constante
    //revisar renglones
    //revisar columnas
    //revisar diagonales
    //revisar repetidos
    //Es magico?
}

// int main()
//  {
//  prueba_suma_renglon();
//  prueba_suma_columna();
//  prueba_suma_diagonal_principal();
//  prueba_suma_diagonal_secundaria();
//  prueba_revisar_repetido();
//  return 0;
//    }