#include <stdio.h>

	int main() {
		
		int segundos;
		
		printf("ingrese el numero de segundos: ");
			scanf("%d", &segundos);
			
			int horas = segundos / 3600;
			int minutos = (segundos % 3600) / 60;
			int segundos_restantes = segundos % 60;
			
			printf("%d segundos equivalen a: \n", segundos);
			printf("%d horas, %d minutos y %d segundos", horas, minutos, segundos_restantes);
			
			return 0;
	}
