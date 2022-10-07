#include<stdio.h>
#include <stdlib.h>
#include<locale.h>

int main (){
	
	float n1, n2, n3, media ;
	
  setlocale(LC_ALL, "Portuguese");
   
   printf("Calculadora de média \n");
   

   printf("\nDigite o primeiro valor: ");
   scanf("%f",&n1);   
   printf("Digite o segundo valor: ");
   scanf("%f",&n2);  
   printf("Digite o terceiro valor: ");
   scanf("%f",&n3);

	media = n1 + n2 + n3 / 3;
	
	// o resultado está errado pois sem os parenteses o programa entende que a divisão deve ser feita primeiro
	
	printf("\nA média dos valores %f, %f, e %f é %f\n", n1,n2,n3,media);	


	
	return 0;
   
}
