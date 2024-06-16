#include <stdio.h>

	int main() {
		
		float C, F;
		
		printf("ingrese la cantidad de grados Celsius a convertir: ");
		scanf("%f", &C);
		
		F = 9 / 5.0 * C + 32;
		
		printf("\n%.2f grados Celsius equivalen a %.2f grados Fahrenheit.", C, F);
		
		
		
		
	}
