//Calculadora de operaciones con figuras geométricas. El menú principal tiene las siguientes opciones:
//1. Áreas, 2. Perímetro, 3. Volumen y 4. Salir
//Autor Cisneros Gutierrez Enrique Alejandro
//Fecha inicio 15/09/2022 Fecha final 16/09/2022
//De:op(Operacion elegidapor el usuario) como tipo entero, fige (figura elegida por el usuario) 
//tipo entero,(numeros a calculas area,perimetro o volumen).
//Ds:Area,perimetro, volumen
//Dp:Formula de cada figura (formula Area),(formula perimetro),(formula volumen)

#include <stdio.h>

int op, fige;
float L,l, Area ,altura, base,Base_mayor,Base_menor,perimetro,Diametro,lado_iz,lado_de, volumen,radio, Pi, circunferencia;

void main()
{//void main

printf ("Area (1)\n");
printf ("Perimetro (2)\n");
printf ("Volumen (3)\n");
printf ("Salir (4)\n");
scanf ("%i",&op);

	do{ //do-while1
		
		
		
		switch (op)
		{ //switch1	
		
		case 1://Area
			printf("\nCuadrado (1)\n");
			printf("Rectangulo (2)\n");
			printf("Triangulo (3)\n");
			printf("Circulo (4)\n");
			printf("Trapecio (5)\n");
			printf("Salir(6)");
				
		scanf("%i",&fige);
			switch(fige)
			{//switch2
				
			
			case 1:
				printf ("Cuadrado\n");
				printf ("Introduce el numero del lado del cuadrado\n");
				scanf("%f",&L);					
				Area=L*L;
				printf("\nEl area es: %0.2f",Area);
				break;
					
			case 2:
				printf ("Rectangulo\n");
				printf ("Introduce el numero del lados del rectangulo\n");
				scanf ("%f",&L);
				scanf ("%f",&l);
				Area=L*l;
				printf ("\nEl area es: %f",Area);
				break;
				
			case 3:
				printf ("Triangulo\n");
				printf ("Introduce la altura del  Triangulo\n");
				scanf ("%f",&altura);
				printf ("Introduce la base del  Triangulo\n");
				scanf ("%f",&base);
				Area=altura * base/2;
				printf ("\nEl area es: %f",Area);
				break;
				
			case 4:
				printf ("Circulo\n");
				printf ("Introduce el radio del  circulo\n");
				scanf("%f",&radio);
				Pi=3.1416;
				Area= Pi*radio*radio;
				printf ("\nEl area es: %f",Area);
				break;
			
			case 5:
				printf ("Trapecio\n");
				printf ("Introduce el Base Mayor del  Trapecio\n");
				scanf("%f",&Base_mayor);
				printf ("Introduce el Base Mayor del  Trapecio\n");
				scanf ("%f",&Base_menor);
				printf ("Introduce la altura del  Trapecio\n");
				scanf ("%f",&altura);
				Area= Base_mayor+Base_menor* altura /2;
				printf ("\nEl area es:%f",Area);
					break;
			case 6:
				printf("Gracias ");
				break;
				
				default:
				printf("ERROR Numero invalido");
				break;
					
			}//switch2;
			
	case 2: //perimetro
		printf("\nCuadrado (1)\n");
		printf("Rectangulo (2)\n");
		printf("Triangulo (3)\n");
		printf("Circulo (4)\n");
		printf("Trapecio (5)\n"); 
				
		scanf("%i",&fige);
				
			switch (fige)
			{//switch3
			
				case 1:
					printf ("Cuadrado\n");
					printf("Introduce el numero del lado del cuadrado\n");
					scanf("%f",&L);
					perimetro=4*L;
					printf ("\nEl perimetro es:%f ",perimetro);
					break;
					
				case 2:
					printf ("Rectangulo\n");
					printf ("Introduce los numeros de ariba y abajo del rectangulo\n");
					scanf ("%f",&L);
					printf ("Introduce la medida de los lados del rectangulo\n");
					scanf ("%f",&l);
					perimetro=L+L+l+l;
					printf("\nEl perimetro es: ",perimetro);
					break;
				
				case 3:
					printf ("Triangulo\n");
					printf ("Introduce la altura del  Triangulo\n");
					scanf("%f",&altura);
					printf ("Introduce la base del  Triangulo\n");
					scanf("%f",&base);
					perimetro=2*altura + base;
					printf ("\nEl perimetro es:%f ",perimetro);
					
				case 4:
					printf ("Circulo\n");
					printf("Introduce el radio del  circulo\n");
					scanf ("%f",&radio);
					Diametro= radio+radio;
					circunferencia=Pi*Diametro;
					printf("\nLa circunferencia es: ",circunferencia);
					break;
					
				case 5:
					printf ("Trapecio");
					printf ("Introduce el Base Mayor del  Trapecio");
					printf ("%f",&Base_mayor);
					printf ("Introduce el Base Mayor del  Trapecio");
					scanf ("%f",&Base_menor);
					printf("Introduce el lado izquierdo del  Trapecio");
					scanf ("%f",&lado_iz);
	  				printf ("Introduce el lado derecho del  Trapecio");
					scanf ("%f",&lado_de);
					perimetro= Base_mayor+Base_menor+lado_iz+lado_de;
					printf("El perimetro es: ",perimetro);
					break;		
				default:
					printf("ERROR Numero invalido");
					break;
			}//switch3;
					
		case 3://volumen
			printf (" Prisma cuadrangular(1)\n");
			printf ("Prisma rectangular (2)\n");
			printf ("Prisma triangular (3)");
			printf ("Cilindro (4)");
			printf ("Prisma del trapecio (5)");
			scanf("%f",&fige);
			switch(fige)
			{//switch4
			
				case 1:
					printf ("Prisma cuadrangular\n");
					printf ("Introduce la altura del Prisma cuadrangular\n");
					scanf("%",&altura);
					printf("Ingresa el area de la base del prisma cuadrangular\n");
					scanf("%",&Area);
					volumen=altura*Area;
					printf ("El volumen es:%f ",volumen);
					break;
						
				case 2:
					printf ("Prisma rectangular\n");
					printf ("Introduce la altura\n");
					scanf ("%f",&altura);
					printf ("Introduce el area de la base del Prisma rectangular\n");
					scanf("%",&Area);
					volumen=altura*Area;
					printf("\nEl volumen es: %f",volumen);
					break;
				
				case 3:
					printf ("Prisma triangular\n");
					printf ("Introduce la altura del prisma triangular\n");
					scanf("%f",&altura);
					printf ("Introduce el area de la base del prisma triangular\n");
					scanf ("%f",&Area);
					volumen=Area*altura;
					printf ("\nEl volumen es: %f",volumen);
					break;
				case 4:
					printf ("Cilindro");
					printf ("Introduce la altura del cilindro");
					scanf("%f",&altura); 
					printf ("Introduce el area de la base del cilindro");
					volumen=altura*Area;
					printf ("El volumen es:%f ",volumen);
					break;
				
				case 5:
					printf ("Prisma del trapecio");
					printf ("Introduce el area de la base del prisma del trapecio");
					scanf("f",&Area);
					printf ("Introduce la altura del prisma del trapecio");
					volumen=Area*altura;
					printf ("El volumen es: %f",volumen);
					break;
					
				default:
					printf ("ERROR Numero invalido");
					break;	
								
			}//switch4;	
		}//switch1;
			
		
			
	}while(op!=4);//do-while1;
	
}//void main;
