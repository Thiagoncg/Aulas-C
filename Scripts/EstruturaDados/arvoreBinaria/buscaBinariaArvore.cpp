#include <iostream>

// Definição da estrutura do nó da árvore
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Função para criar um novo nó
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

// Função para inserir um valor na árvore
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return createNode(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }
    return root;
}

// Função para buscar um valor na árvore
bool search(Node* root, int target) {
    if (root == nullptr) {
        return false;
    }
    if (root->data == target) {
        return true;
    } else if (target < root->data) {
        return search(root->left, target);
    } else {
        return search(root->right, target);
    }
}

int main() {
    // Criando a árvore com os dados fornecidos
    Node* root = nullptr;
    int values[] = {61, 89, 66, 43, 51, 16, 55, 11, 79, 77, 82, 32};
    for (int value : values) {
        root = insert(root, value);
    }

    // Buscando o número 82 na árvore
    int target = 556;
    if (search(root, target)) {
        std::cout << "O número " << target << " está presente na árvore.\n";
    } else {
        std::cout << "O número " << target << " não está presente na árvore.\n";
    }

    // Liberando a memória da árvore (opcional)
    // Implemente a função de liberação de memória se necessário

    return 0;
}
