#include<stdio.h>
#include <stdlib.h>
#include<locale.h>

int main (){
	
	int a, b, c, d, res ;
	
  setlocale(LC_ALL, "Portuguese");
   
   printf("Calculadora de multiplicação \n");
   
   printf("Insira um valor: ");
   scanf("%d",&a);
   printf("Insira um valor: ");
   scanf("%d",&b);
   printf("Insira um valor: ");
   scanf("%d",&c);
   printf("Insira um valor: ");
   scanf("%d",&d);
   
   res = a * b * c * d;
   
   printf("O resultado desta multiplicação é %d",res);
   
}
