#include <stdio.h>
//inverte los digitos de un numero
	int main() {
		
		int numero, aux, invertido, digitos; //numero = el numero ingresado. aux= una copia del numero original para hacer la operacion
		// invertido = el numero con los digitos invertidos. digitos= almacena cada digito del numero original
		
		printf("ingrese un numero para invertir sus digitos: ");
			scanf("%i",&numero);
			
			aux = numero;
			invertido = 0;
			
		while (aux > 0) {
			
			digitos = aux % 10;
			invertido = invertido * 10 + digitos;
			aux /= 10;	
		}
		
		printf("El numero invertido es: %i", invertido);
		
		return 0;
		
	}
