#include<stdio.h>
#include <stdlib.h>
#include<locale.h>

int main (){
	
	float n1, n2, n3, media ;
	
  setlocale(LC_ALL, "Portuguese");
   
   printf("Calculadora de m�dia \n");
   

   printf("\nDigite o primeiro valor: ");
   scanf("%f",&n1);   
   printf("Digite o segundo valor: ");
   scanf("%f",&n2);  
   printf("Digite o terceiro valor: ");
   scanf("%f",&n3);

	media = n1 + n2 + n3 / 3;
	
	// o resultado est� errado pois sem os parenteses o programa entende que a divis�o deve ser feita primeiro
	
	printf("\nA m�dia dos valores %f, %f, e %f � %f\n", n1,n2,n3,media);	


	
	return 0;
   
}
