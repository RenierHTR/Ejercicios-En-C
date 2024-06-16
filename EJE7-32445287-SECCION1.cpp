#include <stdio.h>

// calcula el trabajo realizado por una fuerza constante que mueve un objeto una distancia dada
//formula Trabajo = fuerza * distancia;
	int main(){
		
		float trabajo, fuerza, distancia;
		
		printf("ingrese distancia recorrida en Metros: ");
 			scanf("%f", &distancia);
 			
 		printf("ingrese la fuerza que mueve al objeto en Newtons: ");
 			scanf("%f", &fuerza);
 			
 		trabajo = fuerza * distancia;
 		
 		printf("el trabajo realizado por la fuerza es de: %2.f Joules ", trabajo);
 		
 		return 0;
 			
		
		
	}
