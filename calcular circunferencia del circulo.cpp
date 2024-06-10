#include <stdio.h>

#define PI 3.14159

	int main() {
	double radio;
	double circunferencia;	
		
		printf("Ingrese el radio del circulo: ");
			scanf("%lf", &radio);
			
			circunferencia = 2 * PI * radio;
			
			printf("La circunferencia del circulo es: %.5lf\n", circunferencia);
			
			return 0;
	}
