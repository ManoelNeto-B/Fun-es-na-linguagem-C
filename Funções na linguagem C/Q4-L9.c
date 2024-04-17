/*4. Faça uma função, sem retorno, que recebe a idade do usuário por parâmetro, verifica
e informa se ele é maior de idade ou não.*/

#include <stdio.h>
#include <locale.h>

void idade(int i);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;

    printf("informe sua idade:  ");
    scanf("%i", &i);

    idade(i);

    return (0);
}

void idade(int i)
{

    if (i >= 18)
    {
        printf("você é maior de idade");
    }
    else
    {
        printf("você ainda não é maior de idade");
    }
}