#include <stdio.h>

//calcular el promedio de 6 numeros 
	int main(){
		
		int n1, n2, n3 , n4, n5, n6, promedio;
		
		printf("ingrese el primer numero: ");
			scanf("%i", &n1);
		printf("ingrese el segundo numero: ");
			scanf("%i", &n2);	
		printf("ingrese el tercer numero: ");
			scanf("%i", &n3);
		printf("ingrese el cuarto numero: ");
			scanf("%i", &n4);
		printf("ingrese el quinto numero: ");
			scanf("%i", &n5);
		printf("ingrese el sexto numero: ");
			scanf("%i", &n6);
			
			promedio = (n1 + n2 + n3 + n4 + n5 + n6) / 6;
			
		printf("el promedio de todos los numeros es: %i", promedio);
		
		return 0;
		
		 
	}
