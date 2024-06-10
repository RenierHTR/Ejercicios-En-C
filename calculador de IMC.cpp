#include <stdio.h>

	int main() {
		
		float peso, altura, imc;
		
		printf("ingrese su peso en kilogramos: ");
			scanf("%f", &peso);
			
		printf("ingrese su altura en metros: ");
			scanf("%f", &altura);
			
			imc = peso / (altura * altura);
			
			printf("su IMC es: %.2f\n", imc);
			
			if (imc <18.5) {
				printf("su clasificacion de peso es: bajo peso\n");
			} else if (imc < 25) {
				printf("su clasificacion de peso es: normal\n");
			} else if (imc < 30) {
				printf("su clasificacion de peso es: sobrepeso\n");	
			} else if (imc < 35) {
				printf("su clasificacion de peso es: obesidad I\n");
		    } else if (imc < 40) {
				printf("su clasificacion de peso es: obesidad II\n");
		    } else {
				printf("su clasificacion de peso es: obesidad III\n");
		    }
		    
		    return 0;
			
	}
