#include <stdio.h>
// crea un programa que reciba tres numeros y determine cual es el mayor
	int main(){
		
		float x, y, z;
		
		printf("ingrese el primer numero: ");
			scanf("%f", &x);
		printf("ingrese el segundo numero: ");
			scanf("%f", &y);
		printf("ingrese el tercer numero: ");
			scanf("%f", &z);
			
			if (x>y && x>z) {
				printf("el primer numero es el mayor: %.2f", x);	
			}
				else if (y>x && y>z) {
				printf("el segundo numero es el mayor: %.2f", y);
			}
				else if (z>x && z>y) {
				printf("el tercer numero es el mayor: %.2f", z);
			}	else if (x>y && x == z){
					printf("el numero mayor es %.2f", x);
			}	else if (y>x && y == z){
					printf("el numero mayor es %.2f", y);
			}	else if (z>x && z == y){
					printf("el numero mayor es %.2f", x);
			}	else if (x>z && x == y){
					printf("el numero mayor es %.2f", x);
			}	else if(x == y == z){
				printf("los tres numeros son iguales");
			}
			return 0;
	}
