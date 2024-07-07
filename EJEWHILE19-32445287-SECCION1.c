#include <stdio.h>
//cuenta cuantos digitos tiene un numero ingresado por el usuario

	int main() {
		
		int numero, suma; //
		printf("ingrese un numero para contar sus digitos: ");
			scanf("%i",&numero);
			
			suma = 0;
			
		while (numero > 0) {
			suma = suma + 1;
			numero /= 10;	
		}
		
		printf("La suma de los digitos es: %i", suma);
		
		return 0;
		
	}
