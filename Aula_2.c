/*Programa para imprimir uma mensagemd de saudação, para calcular a área de um circulo e exibir o resultado.*/

// Inclusão de bibliotecas.
#include <stdio.h> //Biblioteca padrão para entrada e saída.

//Definição de constantes.
//#define PI 3.14 //Definindo uma constante para o valor de P.I
const float PI = 3.14;

//Função principal.
int main () {
    //Declaração de variavéis.
    int raio = 5;   //Variável inteira para o raio do circulo.
    float area;     //Variável float para a área do circulo.

    //Impressão de uma mensagem de saudação.
    printf ("Olá, bem-vindo ao programa de calculo de area do circulo! \n");

    //Cálculo da área do círculo.
    area = PI * raio * raio;

    //Exibição do resultado.
    printf ("A área do circulo com raio %d é: %.2f \n", raio, area);

    //Retorno 0 indica que o programa terminou coretamente.
    return 0;
}