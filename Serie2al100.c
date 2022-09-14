/*
Serie de 2 en 2 hasta el 100
Autor: Cisneros Gutierres Enrique Alejandro 5BM
Fecha inicio 06/09/2022
*/
#include <stdio.h>

int num, tabla, res;

void main(){
	
	printf ("\nntrocude el numero de la table quieres calcular");

	
	printf ("\nIngresar tabla\n");
	scanf ("%i", &tabla);
	for (num=1; num<=10; num++){
		res=num*tabla;
		printf("\nEste es tu resultado %i",res);
	}
}
