#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// estrutura do nó
typedef struct node
{
    int data; // dado
    struct node *left; // nó apontando para o filho a esquerda
    struct node *right; // nó apontando para o filho a direita
} Node;

// função para criar um nó
Node *create_node(int key){
    Node *new_node = malloc(sizeof(Node)); // alocando memoria para o nó
    new_node->data = key; // o dado recebe a key
    new_node->left = new_node->right = NULL; // como não tem filhos, os filhos são NULL

    return new_node;
}

int main(){
    Node *root = create_node(30); // raiz

    root->left = create_node(10);        // filho à esquerda da raiz
    root->right = create_node(5);         // filho à direita da raiz
    root->right->left = create_node(1);   // filho à esquerda de 5
    root->right->right = create_node(2);  // filho à direita de 5

    return 0;
}
