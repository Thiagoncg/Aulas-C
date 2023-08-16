//Estrutura de uma função
// tipo_retorno nome_funcao(parâmetros) {
//     // Corpo da função
//     // ...
//     return valor_retorno;
// }

#include <iostream>

// Funções sem parametros
void saudacao() {
    std::cout << "Olá! Bem-vindo à aula sobre funções em C++." << std::endl;
}


//Função sem parametro
int somar() {

    int a = 10;
    int b = 20;
    int resultado = a + b;
    
    std::cout << "O resultado da soma é: " << resultado << std::endl;

    return resultado;
}

int main() {
    saudacao();
    somar();
    return 0;
}

