#include <stdio.h>

//int a = 5;
//float num = 2.3;
//double d = 3.8;
//char c = 't';



int main() {
	//printf("O valor de a é: %d \n", a);
	//printf("O valor de num é: %.2f \n", num);
	//printf("O valor de d é: %.2f \n", d);
	//printf("O valor de c é: %c \n", c);

	int num, soma;
	printf("\nDigite um número ");
	scanf("%d",&num);
	soma = num + 9;
	printf("O valor da variável digitada é %d e o valor da soma é %d\n", num, soma);
	
	return 0;
}