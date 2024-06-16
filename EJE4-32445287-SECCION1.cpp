#include <stdio.h>

//calcula la velocidad media dada la distancia recorrida y el tiempo empleado

	int main(){
		
		float vel, dis, tie;
		
		printf("ingrese la distancia recorrida en kilometros: ");
			scanf("%f", &dis);
		printf("ingrese el tiempo empleado en horas: ");
			scanf("%f", &tie);
			
			vel = dis / tie;
			
		printf("la velocidad media es de: %.2f kilometros por hora", vel);
		
		return 0;
	}
