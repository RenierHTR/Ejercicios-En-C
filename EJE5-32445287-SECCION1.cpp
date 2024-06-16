#include <stdio.h>

//calcula la corriente en un circuito dado el voltaje y la resistencia.

	int main(){
		
		int corriente, voltaje, resistencia;
	
		printf("ingrese el voltaje en voltios: ");
			scanf("%i", &voltaje);
		printf("ingrese la resistencia en ohmios: ");
			scanf("%i", &resistencia);
		
		corriente = voltaje / resistencia;
		
		printf("la corriente del circuito es: %i amperios", corriente);
		
		return 0;
	}
