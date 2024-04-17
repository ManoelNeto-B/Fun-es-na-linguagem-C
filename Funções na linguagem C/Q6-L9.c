/*6. Elabore uma função, com retorno, que calcula a área de uma circunferência. Para
isto, utilize a seguinte fórmula:
𝐴 = 𝜋𝑟
2
Obs.: o valor do raio deve ser fornecido pelo usuário e deve ser passado como
argumento para a função. A função main deve receber e exibir o resultado do
cálculo.*/

#include <stdio.h>
#include <locale.h>

float area(float r);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float r;

    printf("Para calcular a área de uma circuferência informe o seu raio:   ");
    scanf("%f", &r);

    printf("a área da sua cicunferência é  %.2f", area(r));
}

float area(float r)
{

    float area;

    r = 3.14 * (r * r);

    return (r);
}
