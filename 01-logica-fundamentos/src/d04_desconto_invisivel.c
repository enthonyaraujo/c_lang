#include <stdio.h>

// Funcao que deveria aplicar o desconto diretamente no preco original
float aplicar_desconto(float preco_produto, float taxa) {
    return preco_produto * (1.0f - taxa);

}

int main(void) {
    float preco = 100.0f;

    preco = aplicar_desconto(preco, 0.10f); // Tenta aplicar 10% de desconto
    
    printf("Preco final na loja: R$ %.2f\n", preco);
    return 0;
}