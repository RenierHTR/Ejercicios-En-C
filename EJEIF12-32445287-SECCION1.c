#include <stdio.h>
//Escribe un programa que dado un numero del 1 al 7, imprima el dia de la semana correspondiente.
	int main(){
			
	int dia;
	
		printf("Ingrese un numero del 1 al 7 para saber que dia de la semana es: ");
			scanf("%i",&dia);
		
		if (dia == 1){
			printf("El dia Nro 1 de la semana es el Lunes");				
		} else if (dia == 2){
			printf("El dia Nro 2 de la semana es el Martes");
		} else if (dia == 3){
			printf("El dia Nro 3 de la semana es el Miercoles");
		} else if (dia == 4){
			printf("El dia Nro 4 de la semana es el Jueves");
		} else if (dia == 5){
			printf("El dia Nro 5 de la semana es el Viernes");
		} else if (dia == 6){
			printf("El dia Nro 6 de la semana es el Sabado");
		} else if (dia == 7){
			printf("El dia Nro 7 de la semana es el Domingo");
		} else {
			printf("%i no es un numero valido", dia);
		} 
		
		return 0;
		
		
	}
