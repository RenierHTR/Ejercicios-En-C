#include <stdio.h>
// calcula la suma de los numeros pares e impares hasta un numero dado.
	int main() {
		
		int num, sumaP, sumaI, n;
		
		printf("ingrese un numero para sumar todos los numeros pares e impares hasta llegar a el: ");
			scanf("%i",&num);
			
			sumaP = 0;
			sumaI = 0;
			n = 1;
			
			while (num >= n) {
				if (n % 2 == 0) {
					sumaP += n;
				} else {
					sumaI += n;
				}
				
				n = n + 1;
				
			}
		
		printf("el resultado de la suma de numeros pares es: %i\n", sumaP);
		printf("el resultado de la suma de numeros impares es: %i\n", sumaI);
		return 0;
		
	}
