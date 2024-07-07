#include <stdio.h>
// Dado un puntaje de 0 a 100, determina la clasificacion en letra (A, B, C, D, F).

	int main(){
		
		int puntaje;
		
		printf("ingrese la puntuacion en base a 100: ");
			scanf("%i", &puntaje);
			
		if (puntaje>100){
			printf("la puntuacion maxima permitida es de 100pts");
		} else if (puntaje>89) {
			printf("La nota equivale a la clasificacion: A");
		} else if (puntaje>81){
			printf("La nota equivale a la clasificacion: B");
		} else if (puntaje>72){
			printf("La nota equivale a la clasificacion: C");
		} else if (puntaje>62){
			printf("La nota equivale a la clasificacion: D");
		} else if (puntaje<60){
			printf("La nota equivale a la clasificacion: F");
		}
		
		return 0;
		
		
	}
