#include <stdio.h>

//calcula el trabajo realizado por una fuerza constante que mueve un objeto una distancia dada

	int main(){
	
	float trabajo, fuerza, distancia;
	
		printf("ingrese la fuerza en Newtons: ");
			scanf("%f", &fuerza);
			
		printf("ingrese la distancia en metros: ");
			scanf("%f", &distancia);
			
			//formula: t=f*d
			
		trabajo = fuerza * distancia;
		
		printf("el trabajo realizado es de: %.2f Joules", trabajo);
		
		return 0;	



}
