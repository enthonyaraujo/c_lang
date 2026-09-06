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

// função de inserção do nó
Node *insert_node(Node *root, int key){
    if (root == NULL) // se a raiz for nula, o proximo nó a ser inserido é raiz
        return create_node(key);
    if (root->data == key) //se for igual a raiz, ja é raiz
        return root;
    if (root->data < key) // se a chave for maior que a raiz vai para direita
        root->right = insert_node(root->right, key);
    else //caso contrario ela é menor e vai para esquerda
        root->left = insert_node(root->left, key);

    return root;
}

// função para buscar um nó
Node *search_node(Node *root, int key){
    if (root == NULL || root->data == key) // se a raiz for nula ou igual a chave, ja é raiz ou não existe
        return root;
    
    if (root->data < key) // se a chave for maior que a raiz, deve-se procurar na direita
        return search_node(root->right, key);
    
    return search_node(root->left, key); // caso nenhum if seja atendido deve procurar na esquerda
}

// função para encontrar o sucessor (menor valor da subárvore direita)
Node *get_successor(Node *node){
    if (node == NULL || node->right == NULL){ // se o nó ou filho direito for nulo, não tem sucessor na subárvore
        return NULL;
    }

    // vai para subarvore direita
    Node *current = node->right;

    while (current->left != NULL){ // vai para a esquerda até achar o menor valor
        current = current->left;
    }
    return current; // retorna o nó sucessor
}

// função de remover nó
Node *remove_node(Node *root, int key){
    if (root == NULL) // se for nula, não existe
        return root;
    if (root->data < key) // se a chave for maior que a raiz, removemos o nó da direita
        root->right = remove_node(root->right, key);
    else if (root->data > key) // se a chave for menor que a raiz, removemos da esquerda
        root->left = remove_node(root->left, key);
    else { // achou o nó a ser removido
        if (root->left == NULL) { // se não tem filho à esquerda, retorna o da direita
            Node *temp = root->right;
            free(root);
            return temp;
        }
        if (root->right == NULL) { // se não tem filho à direita, retorna o da esquerda
            Node *temp = root->left;
            free(root);
            return temp;
        }
        
        // caso com dois filhos: pega o sucessor (menor da subárvore direita)
        Node *succ = get_successor(root);
        root->data = succ->data; // copia o dado do sucessor para a raiz
        root->right = remove_node(root->right, succ->data); // remove o sucessor da direita
    }
    return root; // retorna a raiz atualizada
}

int main(){
    // 30 10 5 1 2
    
    Node *root = NULL; // ponteiro da raiz da árvore
    root = insert_node(root, 30);  
    root = insert_node(root, 10);   
    root = insert_node(root, 5);   
    root = insert_node(root, 1); 
    root = insert_node(root, 2);

    return 0;
}

