#include <stdio.h>

//calcula el numero de moles de una sustancia dada su masa y masa molar

//formula n = m / M

// moles(n) masa(m) masa molar(M)

 int main(){
 	
 	float n, m, M;
 	
 		printf("ingrese la masa de la sustancia en gramos: ");
 			scanf("%f", &m);
 			
 		printf("ingrese la masa molar de la sustancia en gramos: ");
 			scanf("%f", &M);	
 			
 		n = m / M;
 		
 		printf("el numero de moles en la sustancia es: %.2f", n);
 			
 			return 0;
 	
 	
 }
