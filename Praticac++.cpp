#include <iostream>
using namespace std;

/**
 * Enumeração que define os diferentes tipos de clima.
 * 
 * sol = 0, chuva = 1, nublado = 2.
 */
enum clima {sol = 0, chuva = 1, nublado = 2};   

/**
 * Função para trocar os valores de três inteiros.
 * 
 * A função usa referências para alterar os valores diretamente.
 * 
 * @param x Primeiro valor inteiro a ser trocado.
 * @param y Segundo valor inteiro a ser trocado.
 * @param z Terceiro valor inteiro a ser trocado.
 */

void swap(int &x, int &y, int &z){
    int temp = x;
    x = y;
    y = z;
    z = temp;
}

int contarArray(int arr[], int tamanho) {
    return tamanho; // O tamanho é passado para a função diretamente
}

/**
 * Função para dobrar os valores de três inteiros.
 * 
 * Os valores de x, y e z são multiplicados por 2.
 * 
 * @param x Valor inteiro a ser dobrado.
 * @param y Valor inteiro a ser dobrado.
 * @param z Valor inteiro a ser dobrado.
 */
void dobrar(int &x, int &y, int &z){
    x *= 2;
    y *= 2;
    z *= 2;
}

/**
 * Função para exibir uma mensagem dependendo do clima atual.
 * 
 * @param hoje O valor inteiro que representa o clima do dia.
 *               0 = sol, 1 = chuva, 2 = nublado.
 */
void Tempo(int hoje){
    switch(hoje){
        case 0: cout << " Tá sol meu rico filho " << endl; break;
        case 1: cout << "ta meio chuva meu rico filho " << endl; break;
        case 2: cout << "Ta nublado e melhor nao vai chover " << endl; break;
    }
}

/**
 * Função que soma dois números inteiros.
 * 
 * @param x O primeiro número a ser somado.
 * @param y O segundo número a ser somado.
 * @return A soma de x e y.
 */
int soma(int x, int y){
    return x + y;
}

/**
 * Função que demonstra como manipular ponteiros para inteiros.
 * 
 * A função recebe três valores inteiros por referência e demonstra
 * o uso de ponteiros para alterar o valor de um dos inteiros.
 * 
 * @param x Primeiro valor inteiro.
 * @param y Segundo valor inteiro.
 * @param z Terceiro valor inteiro.
 */
int PtrintIdade(int &x, int &y, int &z){ 
    int *a = &x;
    int *b = &y;
    int *c = &z;
   
    *c = 2; // Altera o valor de c para 2.

    cout << *b << endl; // Exibe o valor de y.
    cout << *a << endl; // Exibe o valor de x.
    cout << *c << endl; // Exibe o valor de z (modificado para 2).
}

void Valorend(int x){
    
    
    int *y = &x;
    cout << y;
    cout << *y;


}

/**
 * Soma todos os elementos de um array de inteiros.
 * 
 * @param arr O array de inteiros a ser somado.
 * @param n O tamanho do array.
 * @return A soma de todos os elementos do array.
 */
int somaArray(int arr[], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += arr[i];
    }
    return soma;
}

/**
 * Encontra o maior valor presente em um array de inteiros.
 * 
 * @param arr O array de inteiros.
 * @param n O tamanho do array.
 * @return O maior valor no array.
 */
int maiorValor(int arr[], int n) {
    int maior = arr[0];  // Assume o primeiro elemento como o maior inicialmente
    for (int i = 1; i < n; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}




/**
 * 
 * Função principal que executa várias operações com inteiros, incluindo troca, dobra,
 * soma, e manipulação de ponteiros.
 * 
 * Exibe o valor dos inteiros antes e depois das modificações e chama as funções
 * Tempo, soma e PtrintIdade.
 */
int main(){
    int a = 3;
    int b = 56;
    int c = 24;
    
    // Exibe os valores iniciais
    cout << a << endl;
    cout << b << endl;

    // Chama a função swap
    swap(a, b, c);
    cout << "valor trocado(c) " << a << endl;
    cout << "valor trocado (b) " << b << endl;
    cout << "valor trocado (a) " << c << endl;
    
    swap(a, b, c);
    cout << "valor trocado (a) " << a << endl;
    cout << "valor trocado (b) " << b << endl;
    cout << "valor trocado (c) " << c << endl;
    
    // Chama a função dobrar
    dobrar(a, b, c);
    cout << "valores dobrados " << a << endl;
    cout << "valores dobrados " << b << endl;
    cout << "valores dobrados " << c << endl;
    
    // Chama a função Tempo
    int hoje = 1;
    Tempo(hoje);

    // Chama a função soma e exibe o resultado
    cout << "numero do goat " << endl;
    cout << soma(4, 3) << endl;

    cout << "suiiiiiiiiii" << endl;

    // Chama a função PtrintIdade
    PtrintIdade(a, b, c);
    cout << c << endl;
    Valorend(b);

    
    return 0;
}
