/*
Faça um programa que cadastre o nome e o saário de 5 funcionarios. Usando três metodos de ordenação diferentes,
liste todos os dados dos funcionarios das seguintes formas:

a) em ordem crescente de salário;
b) em ordem decrescente de salário;
c) em ordem alfabética;
*/

#include <stdio.h>
#include <stdlib.h>


int bubbleSORT(int lista[], int tam){
    for (size_t i = 0; i < tam - 1; i++)
    {
        for (size_t j = 0; j < tam - 1 - i; j++)
        {
        if (lista[j] > lista[j+1])
        {
            int aux = lista[j];
            lista[j] = lista[j+1];
            lista[j+1] = aux;
        }
        }   
    }
    
}

int printLista(int lista[], int tam){
    for (size_t i = 0; i < tam; i++)
    {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

int main(){

    int lista[] = {5,4,2,1,8};
    int tam = sizeof(lista) / sizeof(lista[0]);
    
    printf("BubbleSort: ");
    bubbleSORT(lista, tam);
    printLista(lista, tam);
}