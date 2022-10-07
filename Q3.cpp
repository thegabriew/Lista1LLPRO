#include<stdio.h>
#include <stdlib.h>
#include<locale.h>

int main (){
	
	float n1, n2, media ;
	
  setlocale(LC_ALL, "Portuguese");
   
   printf("Calculadora de média \n");
   

   printf("\nDigite o primeiro valor: ");
   scanf("%f",&n1);   
   printf("Digite o segundo valor: ");
   scanf("%f",&n2);  


	media = (n1 + n2) / 2;
	
	printf("\nA média dos valores %f e %f é %f\n", n1,n2,media);	


	
	return 0;
   
}
