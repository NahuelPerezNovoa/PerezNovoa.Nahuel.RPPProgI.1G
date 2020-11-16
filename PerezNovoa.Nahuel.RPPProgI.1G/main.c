#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char procesador[20];
    char marca [20];
    float precio;
} Notebook;

float aplicarDescuento(float a);

int contarCaracteres(char cad[], char caracter);

void ordenarNotebook(*Notebook array[], int tam);

int main()
{

    int precio = 10;
    char cadena[15] = "dinosaurioiii";
    Notebook arrayNotebook[5];

    arrayNotebook[0] = {1,"XL50","Sony",6500};
    arrayNotebook[1] = {2,"ghz12","AMD",14000};
    arrayNotebook[2] = {3,"fg423","Intel",7800};
    arrayNotebook[3] = {4,"152zz","Sony",4300};
    arrayNotebook[4] = {5,"xbx02","Sony",10750};
    printf("$%.2f\n",aplicarDescuento(precio));
    printf("Cantidad: %d\n",contarCaracteres(cadena,'i'));
    for (int i=0; i<0; i++)
    {
        printf("%d, %s, %s, $%.2f",arrayNotebook[i]->id,)
    }

    return 0;
}

float aplicarDescuento(float a)
{
    int porcentaje = 5;
    float valorConDescuento;

    valorConDescuento= a - (a*porcentaje/100);

    return valorConDescuento;
}

int contarCaracteres(char cad[], char caracter)
{
    int len;
    int contador=0;

    len = strlen(cad);

    for(int i = 0; i<len; i++)
    {
        if(cad[i]==caracter)
        {
            contador++;
        }
    }

    return contador;
}

void ordenarNotebook(*Notebook array[], int tam)
{
    Notebook aux;

    for (int i = 0; i<tam-1; i++)
    {
        for (int j = 0; j<tam; j++)
        {
            if(strcmp(array[i]->marca,array[j]->marca)<0)
            {
                aux=array[i];
                array[i]=array[j];
                array[j]=aux;
            }
            else if(strcmp(array[i]->marca,array[j]->marca)==0)
            {
                if(array[i]->precio<array[j]->precio)
                {
                    aux=array[i];
                    array[i]=array[j];
                    array[j]=aux;
                }
            }
        }
    }
}
