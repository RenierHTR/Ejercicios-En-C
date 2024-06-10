#include <stdio.h>

	int main(){
		
		float base, altura, area;
			
			printf("Ingrese la base del triangulo: ");
				scanf("%f", &base);
				
			printf("Ingrese la altura del triangulo: ");
				scanf("%f", &altura);
				
			area = base * altura / 2;
			
			printf("El area del triangulo es: %.2f\n", area);
			
			return 0;
				
	}
