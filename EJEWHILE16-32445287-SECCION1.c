#include <stdio.h>
//crea un juego donde el usuario intenta adivinar un numero entre 1 y 100, y el programa le indica si es mayor o menor hasta que adivines
	int main(){
		
		 int num, adivinar = rand();
		 
		 while(1){
		 	
		 	printf("Trata de adivinar el numero entre 1 y 100. \ningrese el numero: ");
		 		scanf("%i", &num);
		 		
		 		if (num == adivinar) {
		 			printf("Tu ganas! Has adivinado el numero");
		 			break;
		 		} else if (num > adivinar) {
		 			printf("el numero que ingresaste es muy alto!\n");
		 		
		 		} else if (num < adivinar) {
		 			printf("el numero que ingresaste es muy bajo!\n");
		 		}
		 }
		
		return 0;
	}
