#include <stdio.h>
// saber si un numero es par o impar
	int main(){
		
		
		int numero;
		
		printf("ingrese un numero para saber si es par o impar: ");
			scanf("%i", &numero);
			
			if (numero % 2 == 0) {
				printf("%i es un numero par", numero);
			}	else {
				printf("%i es un numero impar", numero);
			}
			
			return 0;		
		
	}
