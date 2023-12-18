// crear un programa que tenga un vector de 100 numeros aleatorios entre 1 y 1000.
// una vez creado organizarlo de tal manera que almacene los numeros pares en un vector y los impares en otro

#include <stdio.h>
#include <stdlib.h>
#define tam 10


void cargarVector(int v[],int);
void vectorPar(int v[],int);
void vectorImpar(int v[],int);

int main()
{
    int vector[tam];
    int largo = tam;
    cargarVector(vector,largo);
    vectorPar(vector,largo);
    vectorImpar(vector,largo);

    return 0;
}

void cargarVector(int v[],int largo){

    int i;
    largo=tam;

    for(i=0;i<largo;i++){
        printf("[%d]. ",i+1);
        scanf("%d",&v[i]);
        fflush(stdin);
    }
    for(i=0;i<largo;i++){
        printf("%d. %d\n",i+1,v[i]);
    }
    printf("----------------------------------------\n");
}

void vectorPar(int v[], int largo){
    printf("Vector par\n");
    for(int i=0;i<largo;i++){
        if(v[i]%2==0){
            printf("%d\n",v[i]);
        }
    }
}

void vectorImpar(int v[], int largo){
    printf("Vector impar\n");
    for(int i=0;i<largo;i++){
        if(v[i]%2!=0){
            printf("%d\n",v[i]);
        }
    }
}