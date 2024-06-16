#include <stdio.h>

#define PI 3.14159
//calcula el area de un circulo dado su radio
	int main(){
		float radio, area; 
		
		printf("ingrese el radio del circulo: ");
			scanf("%f", &radio);
			
			area = PI * radio * radio;
			
			printf("el area del circulo es: %f", area);
				
				return 0;
		
	}
