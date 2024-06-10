#include <stdio.h>

	int main(){
		
		float lado1, lado2, lado3, perimetro;
		
		printf("ingrese la longitud del lado 1: ");
			scanf("%f", &lado1);
		printf("ingrese la longitud del lado 2: ");
			scanf("%f", &lado2);
		printf("ingrese la longitud del lado 3: ");
			scanf("%f", &lado3);
			
			perimetro = lado1 + lado2 + lado3;
			
			printf("el perimetro del triangulo es: %.2f\n", perimetro);
			
			return 0;
	}
