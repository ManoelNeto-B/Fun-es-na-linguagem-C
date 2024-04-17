/*3. Faça uma função, sem retorno, que recebe um valor inteiro por parâmetro, verifica e
informa se tal número é par ou ímpar.*/

#include<stdio.h>
#include<locale.h>

void par_impar ( int x );

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("Informe o número desejado:  ");
	scanf("%i", &x);
	
	par_impar ( x );
	
	return (0);
}

void par_impar ( int x ) {
  
  if ( x % 2 == 0) {
  	printf("o número informado é PAR");
  } else {
  	printf("o número informado é IMPAR");
  }
  
}