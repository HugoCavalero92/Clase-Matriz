/*Ejercicio con Matrices



Escriba un programa en Lenguaje C primero cargue ALEATOREAMENTE NÚMEROS  en una matriz de [5X5] y que luego, recorra la matriz y determine
la SUMA DE LOS NÚMEROS IMPARES que  están por encima de la diagonal principal sin incluir a la misma.

Ejemplo: Si la matriz se cargara aleatoriamente con los siguientes valores, se debería mostrar por pantalla: “La Suma es: 26.”

Subir al campus archivo extensión .cp, .cpp o txt*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 5

void cargar (int matriz[][n]);
int suma (int matriz[][n]);

int main()
{
  int matriz[n][n];
  srand(time(NULL));
  cargar(matriz);
  printf("\n\n\tLA SUMA DE LA PARTE SUPERIOR DE LA DIAGONAL PRINCIPAL ES %d", suma(matriz));
  return 0;
}

void cargar (int matriz[][n])
{
    int i, j;
    printf("\n\n\tMATRIZ CARGADA!!!\n\n");
    for(i=0; i<n; i++)
    {
        printf("\n\n");
        for(j=0; j<n; j++)
        {
            matriz[i][j]=rand()%51;
            printf("\t %d", matriz[i][j]);
        }
    }
}


int suma (int matriz[][n])
{
  int i, j;
  int sumador=0;
  for(i=0; i<n; i++)
  {
      for(j=0; j<n; j++)
      {
          if(i>j)
          {
              if(matriz[i][j]%2==1)
                {
                   sumador= sumador + matriz[i][j];
                }
          }
      }
  }
  return sumador;
}
