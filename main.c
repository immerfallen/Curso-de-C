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

	//int num, soma;
	//printf("\nDigite um número ");
	//scanf("%d",&num);
	//soma = num + 9;
	//printf("O valor da variável digitada é %d e o valor da soma é %d\n", num, soma);

	//int a;
	//printf("Digite o valor: ");
	//scanf("%d", &a);

	//if(a>=0 && a<=8)
	//{
	//	printf("A variável está entre 0 e 8 e vale %d", a);
	//}
	//else
	//{
	//	printf("A variável a é maior que 8 e vale %d\n", a);
	//}

	int a=0;

	printf("\nLaço while\n");

	while(a<5){
		printf("Variável a é %d\n", a);
		a++;
	}

	printf("\nLaço for\n");

	for(int i=0; i<4; i++)
	{
		printf("A variável i é: %d\n", i);
	}
	
	
	return 0;
}