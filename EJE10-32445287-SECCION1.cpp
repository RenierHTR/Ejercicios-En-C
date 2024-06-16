#include <stdio.h>

//calcula la concentracion molar de una solucion dada la cantidad de soluto y el volumen de la solucion

	int main(){
		
		float msoluto, Msoluto, volsolucion, concentracionmolar;
		
		printf("ingrese la masa del soluto en gramos: ");
 			scanf("%f", &msoluto);
 			
 		printf("ingrese la masa molar del soluto en gramos: ");
 			scanf("%f", &Msoluto);
 			
 		printf("ingrese el volumen de la solucion en litros: ");
 			scanf("%f", &volsolucion);
 			
 			concentracionmolar = (msoluto / Msoluto) / volsolucion;
 			
 			printf("la concentracion molar de la solucion es: %.2f M", concentracionmolar);
 		
 			return 0;
		
	}
