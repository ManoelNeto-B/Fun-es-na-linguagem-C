/*2. Crie uma função, sem retorno, que recebe um valor inteiro por parâmetro e informa
se ele é positivo, negativo ou neutro.*/

#include <stdio.h>
#include <locale.h>

void cont(int x);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x;

    printf("Para realizar a checagem informe o valor:  ");
    scanf("%i", &x);

    cont(x);

    return (0);
}

void cont(int x)
{

    if (x == 0)
    {
        printf("o número é neutro");
    }
    else if (x > 0)
    {
        printf("o número é positivo");
    }
    else
    {
        printf("o número é negativo");
    }
}
