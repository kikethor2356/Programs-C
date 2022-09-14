


#include <stdio.h>
int main()
{
float AR;
float l,La;
float AC;
float L;
float a;
float b;
float AT;
float ARO;
float d;
float D;
float e;			//Variables 
float c;
float f;
float ATR;
float ACI;
float r;
int Fige;

printf("Seleccione una figura geometrica");
printf("\n""Escribe 0 si quieres Cuadrado");
printf("\n""Escribe 1 si quieres Rectangulo");
printf ("\n""Escribe 2 si quieres Triangulo");
printf ("\n""Escribe 3 si quieres Rombo");
printf ("\n""Escribe 4 si quieres Trapecio");
printf ("\n""Escribe 5 si quieres Circulo\n ");

scanf ("%i",&Fige);



switch (Fige){
    case 0:
        printf ("introduce los numeros a calcular el area del cuadrado");
        scanf ("%f",&L);
        L=scanf ("%f",&L);
        AC=L*L;
        printf("\n%f",AC," Cm  Esta es la Area del Cuadrado");
    break;
    case 1:
        printf ("introduce los numeros a calcular el area del rectangulo");
        scanf ("\n%f",&La);
        scanf ("\n%f",&l);
        AR=La*l;
        printf("\n%f", AR," Cm  Esta es la Area del rectangulo");

    break;
    case 2:
        printf ("introduce los numeros a calcular el area del triangulo");
        scanf ("\n%f",&a);
        scanf ("\n%f",&b);
        AT=b*a/2;
        printf("\n%f",AT," Cm  Esta es la Area del triangulo");

    break;
    case 3:
    	printf("Rombo\n");
		printf("Introduzca Diagonal mayor\n");
		scanf("%i",&D);
		printf("Introduzca diagonal menor\n");
		scanf("%i",&d);
		ARO=D*d/2;
		printf("Area de Rombo = %.1f\n",ARO);
		break;

    break;
    case 4:
        printf ("introduce los numeros a calcular el area del trapecio");
        scanf ("\n%f",&c);
        scanf ("\n%f",&e);
        scanf ("\n%f",&f);
        TR=(c+e/2*f);
        printf("\n%f Cm  Esta es la Area del trapecio",TR);

    break;
    case 5:
        printf ("introduce el radio a calcular el area del circulo");
        scanf ("\n%f",&r);
        ACI=3.1416*r*r;
        printf("\n%f",ATR," Cm  Esta es la Area del circulo");

    break;





return 0;


