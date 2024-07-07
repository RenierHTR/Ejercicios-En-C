#include <stdio.h>
//calcula la suma de los digitos de un numero entero positivo

	int main(){
		
		int num, digito, suma =0;
		// num es el numero que da el usuario, digito es donde se guarda cada digito del numero y suma es la suma de digitos
		
		printf("ingrese un numero entero y positivo para calcular la suma de sus digitos: ");
			scanf("%d", &num);
			
			//el Num>0 indica que mientras el numero introducido sea mayor a 0, el ciclo se va a seguir repitiendo
			while (num>0) {
				digito = num % 10; //se obtiene el ultimo digito del numero utilizando %. porque ese operador devuelve el residuo de la division
				suma += digito;	   //el digito obtenido de la division se va a la variable suma
				num /= 10;			// se elimina el ultimo digito del numero dividiendo entre 10
			}
		
		printf("la suma de los digitos del numero ingresado es: %d", suma);
		
		return 0;		
		
	}
