#include <stdio.h>
int op;


float CalcularTria(float b,float h);
float CalcularRec(float b,float h);

void main()
{
MostrarMenu();
}


float IngresarAltura(){//funcion 3
	float h;
	printf ("Altura:\n");
	scanf("%f",&h);
	return(h);
}
float IngresarBase(){//funcion 2
float b;
 	printf ("Base:\n");
 	scanf("%f",&b);
 	return(b);
}
float CalcularRec(float b,float h)
{// funcion 4
float a;
	a=b*h;
	return(a);
}
float CalcularTria(float b,float h)
{float a;
	
	a=(b*h)/2;
	return(a);
}

void Area(float a){
	printf("Area:%.2f\n ",a);
}


int MostrarMenu(){//funcion 1
do{
	float b,h,a;
		printf ("1 Area del rectangulo\n");
		printf ("\n2 Area del triangulo\n");
		printf ("\n3 Salir\n");
		scanf ("%i",&op);
		
		
		switch (op) 
		{
		
		case 1:
				
				b=IngresarBase();
				h=IngresarAltura();
				a=CalcularRec(b,h);
				Area(a);
				break;
		case 2:
				IngresarBase();
				IngresarAltura();
				CalcularTria(b,h);
				Area(a);
				break;
		case 3:
				printf("Vuelva pronto\n");
		Default:
				printf ("Opcion no valida");
						
		}
}while (op!=3);
}
 

	

	


	
	
