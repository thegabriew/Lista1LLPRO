#include<stdio.h>
#include <stdlib.h>
#include<locale.h>

int main (){
	
	int a, b, resto, div ;
	
  setlocale(LC_ALL, "Portuguese");
   
   printf("Calculadora de multiplica��o \n");
   
   printf("Insira um valor: ");
   scanf("%d",&a);
   printf("Insira um valor: ");
   scanf("%d",&b);
   
   
   div = a / b ;
   resto = a % b;
   
   printf("\nO resultado desta divis�o � %d e o resto � %d",div,resto);
   
}
