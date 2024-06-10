#include <stdio.h>

	int main () {
		
		float lado, perimetro;
		
		printf("Ingrese la longitud de un lado del cuadrado: ");
			scanf("%f", &lado);
			
			perimetro = 4 * lado;
			
			printf("El perimetro del cuadrado es: %.2f\n", perimetro);
			
			return 0;
	}
