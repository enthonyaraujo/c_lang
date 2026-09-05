#include <stdio.h>

// três erros logicos
// soma e o vetor de notas estava declarado int, era pra ser float

int main(void) {
    float notas[4] = {8, 7, 9, 6};
    float soma; 
    
    for (int i = 0; i <= 4; i++) {
        soma += notas[i];
    }
    
    float media = soma / 4; 
    printf("Media final do aluno: %.1f\n", media);
    
    return 0;
}