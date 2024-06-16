#include <stdio.h>

//calcula la fuerza aplicada a un objeto dada su masa y aceleracion.

	int main(){
		
		float F, M, A;
		
		printf("ingrese la masa del objeto en kilogramos: ");
			scanf("%f", &M);
			
		printf("ingrese la aceleracion del objeto en km/h: ");
			scanf("%f", &A);
			
		F = M * A;
		
		printf("la fuerza aplicada es de: %2.f Newton", F);
		
		return 0;
			
			
		
		
	}
