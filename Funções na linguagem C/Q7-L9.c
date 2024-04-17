/*7. Faça uma função, com retorno, para calcular o valor do volume de uma caixa
retangular, utilizando a seguinte fórmula:
𝑣𝑜𝑙𝑢𝑚𝑒 = 𝑐𝑜𝑚𝑝𝑟𝑖𝑚𝑒𝑛𝑡𝑜 × 𝑙𝑎𝑟𝑔𝑢𝑟𝑎 × 𝑎𝑙𝑡𝑢𝑟𝑎
Obs.: os valores do comprimento, da largura e da altura devem ser fornecidos pelo
usuário e devem ser passados como argumento para a função. A função main deve
receber e exibir o resultado do cálculo.*/

#include <stdio.h>
#include <locale.h>

float calculoV(float c, float l, float a);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float c, l, a, r;

    printf("para calcular o volume de uma caixa informe o que for pedido\n");

    printf("a seguir informe o comprimento a largura e a altura da caixa: \n");
    scanf("%f %f %f", &c, &l, &a);

    printf("o volume da sua caixa é: %.2f ", calculoV(c, l, a));

    return (0);
}

float calculoV(float c, float l, float a)
{

    return (c * l * a);
}
