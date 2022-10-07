#include<stdio.h>
#include <stdlib.h>
#include<locale.h>

int main (){
	
	int a, b, c, res ;
	
  setlocale(LC_ALL, "Portuguese");
   
   printf("Soma & Subtração \n");
   
   printf("\nInsira um valor: ");
   scanf("%d",&a);
   printf("Agora insira um valor a ser somado: ");
   scanf("%d",&b);
    printf("Agora insira um valor a ser subtraido: ");
   scanf("%d",&c);
   
 	res = a + b - c;
   
   printf("\nO resultado desta conta é %d",res);
   
}
