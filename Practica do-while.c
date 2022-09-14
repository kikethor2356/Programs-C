/*
Hacer un menu donde se hagan las operaciones basicas (Suma, Resta, Multiplicacion,Division) introduciendo dos numeros enteros positivos.
Fecha de inicio 08/09/2022 	Fin 08/09/2022
Autor Cisneros Gutierrez Enrique Alejandro

De:Los numeros intoducidos por el usuario de tipo entero
Ds: El resultado de la operacion que eligio el usuario
Dp: x=a+b  ,x=a.b , x=a*b , x=a/b

*/
#include <stdio.h>

int num,a,b; 
float x;

void main(){

 do{
 
	printf("\n\tQue operacion necesitas hacer");
	printf("\n\tSuma (1)");
	printf ("\n\tResta (2)");
	printf("\n\tMultiplicación (3)");
	printf ("\n\tDivisión (4)");
	printf ("\n\tSalir (5)");
	


	scanf("%i",&num);



		switch (num) 
		{
		
		case 1:
		do{
		
			printf("Ingrese el numero a calcular: "); scanf("%i",&a);
		}while(a<0);	
		
		do{
		
			printf("Ingrese el numero a calcular: "); scanf("%i",&b);	
		}while(b<0);
			x=a+b;
			printf ("Este es tu reultado de Suma %.2f",x);
			break;
		
		
		
			
		case 2:
		do{
			printf("Ingrese el numero a calcular"); scanf("%i",&a);
		}while(num<0);
		
		do{	
			printf("Ingrese el numero a calcular"); scanf("%i",&b);	
		}while(b<0);
			x=a-b;
			printf ("Este es tu reultado de resta %.2f",x);
			break;
			
		
	
		
		case 3:
		do{
			printf("Ingrese el numero a calcular"); scanf("%i",&a);
		}while(num<0);
		
		do{	
			printf("Ingrese el numero a calcular"); scanf("%i",&b);	
		}while(b<0);
			x=a*b;
			printf ("Este es tu reultado de multiplicacion %.2f",x);
			break;
		
		
		
		case 4:
		do{
			printf("Ingrese el numero a calcular"); scanf("%i",&a);
		}while(num<0);
		
		do{	
			printf("Ingrese el numero a calcular"); scanf("%i",&b);	
		}while(b<0);
			x=a/b;
			printf ("Este es tu resultado de Division %.2f",x);
			break;
		
		
		
			
		case 5:
			printf ("Gracias por usar mi programa");
			break;
			
			
			
			
		default:
			printf ("Datos erroneos, igreselos de nuevo");
		
			printf("\n\tQue operacion necesitas hacer");
			
			
			
			
			
	printf("\n\tSuma (1)");
	printf ("\n\tResta (2)");
	printf("\n\tMultiplicacion (3)");
	printf ("\n\tDivisión (4)");
	printf ("\n\tSalir (5)");
		}
}while(num!=5);

}
