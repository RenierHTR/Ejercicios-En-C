#include <stdio.h>

	int main (){
		
		float numberone, numbertwo, resultado;
		char operador;
		printf("Introduzca el primer numero: ");
		scanf("%f", &numberone);
		
		printf("Introduzca un operador: (+, -, *, /) : ");
		scanf(" %c", &operador);
		
		printf("Introduzca el segundo numero: ");
		scanf("%f", &numbertwo);

		switch (operador) {
			case '+':
				resultado = numberone + numbertwo;
				break;
				case '-':
				resultado = numberone - numbertwo;
				break;
				case '*':
				resultado = numberone * numbertwo;
				break;
				case '/':
					if (numbertwo==0) {
						printf("no se puede dividir entre 0\n");
						return 1;
					} 
					resultado = numberone / numbertwo;
					break;	
					default:
					printf("El operador no es valido\n");
					return 1;
					}
				
					
					printf("El resultado es: %.1f\n", resultado);
					
					return 0;
					
				
		
	
		
		
	}
