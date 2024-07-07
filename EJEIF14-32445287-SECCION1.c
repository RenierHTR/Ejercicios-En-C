#include <stdio.h>
//escribe un programa que verifique si un numero es multiplo de 5
	int main() {
		
		int num;
		
		printf("ingrese un numero para saber si es un multiplo de 5: ");
			scanf("%i", &num);
			
		if (num % 5 == 0) {
			printf("el numero %i si es un multiplo de 5", num);
		} else {
			printf ("el numero %i no es un multiplo de 5", num);
		}
		
		return 0;
	}
