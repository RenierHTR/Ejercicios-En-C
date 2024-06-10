#include <stdio.h>

	int main() {
		
		float lado, area;
		
		printf ("Ingrese la longitud de un lado del cuadrado: ");
		scanf("%f",&lado);
		
		area = lado * lado;
		
		printf("El area del cuadrado es: %.2f \n", area);
		
		return 0;
	}
