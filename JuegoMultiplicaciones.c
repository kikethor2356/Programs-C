/* Juego de multiplicaciones, el programa mostrará 5 operaciones al azar de una en una.
El usuario escribirá la respuesta a la operación si el usuario acierta se 
sumarán 2 puntos, si se equivoca se restara 1

De:Nivel (num) como numero entero, Resultado n4 como numero entero.
Ds:Puntaje como numero entero, Ganador o perdedor como numero entero.
Dp: n3==n4
Autor Cisneros Gutierrez Enrique Alejandro
Fecha inicio 15/09/2022 Fecha final 16/09/2022
*/
# include <stdio.h>
# include <stdlib.h>
# include <time.h>


int num, n1,n2,n3,n4, puntaje, val1 ;
	
void main()
{
	do	
	{
		printf("\nNivel 1 (1)\nNivel 2 (2)\nNivel 3 (3)\nSalir (4)\n");
	
		scanf("%i",&num);
		switch (num)
		{
		case 1:
			for (val1=1;val1<=5;val1++) {
				n2 = (1+rand()%6);
				n1 = (1+rand()%10);
				n3 = n1*n2;
				printf("%ix%i=\n",n2,n1);
				scanf("%i",&n4);
				if (n3==n4) {
					printf("You Win\n");
					puntaje = puntaje+2;
					printf("Puntaje: %i\n",puntaje);
				} else {
					printf("You lose\n");
					puntaje = puntaje-1;
					printf("Puntaje: %i\n",puntaje);
				}
			}
			printf ("Puntaje total %i",puntaje);
			break;
		
		
			case 2:
			for (val1=1;val1<=5;val1++) {
				n2 = (1+rand()%11);
				n1 = (1+rand()%11);
				n3 = n1*n2;
				printf("%ix%i=\n",n2,n1);
				scanf("%i",&n4);
				if (n3==n4) {
					printf("You Win\n");
					puntaje = puntaje+2;
					printf("Puntaje: %i\n",puntaje);
				} else {
					printf("You lose\n");
					puntaje = puntaje-1;
					printf("Puntaje: %i\n",puntaje);
				}
			}
			printf ("Puntaje total %i",puntaje);
			break;
			
				case 3:
			for (val1=1;val1<=5;val1++) {
				n2 = (1+rand()%11+89);
				n1 = (1+rand()%11);
				n3 = n1*n2;
				printf("%ix%i=\n",n2,n1);
				scanf("%i",&n4);
				if (n3==n4) {
					printf("You Win\n");
					puntaje = puntaje+2;
					printf("Puntaje: %i\n",puntaje);
				} else {
					printf("You lose\n");
					puntaje = puntaje-1;
					printf("Puntaje: %i\n",puntaje);
				}
			}
			printf ("Puntaje total %i",puntaje);
			break;
			
			case 4:
				printf ("Gracias por jugar");
				printf ("Tu puntaje final es: %i",puntaje);
			break;
			default:
				printf("Ingrese un numero valido");
		}
	}while(num!=4); 
	
		
}
	
