#include<stdio.h>
#include <stdlib.h>
#include<locale.h>

int main (){
	
	float n1, n2, media ;
	
  setlocale(LC_ALL, "Portuguese");
   
   printf("Calculadora de m�dia \n");
   

   printf("\nDigite o primeiro valor: ");
   scanf("%f",&n1);   
   printf("Digite o segundo valor: ");
   scanf("%f",&n2);  


	media = (n1 + n2) / 2;
	
	printf("\nA m�dia dos valores %f e %f � %f\n", n1,n2,media);	


	
	return 0;
   
}
