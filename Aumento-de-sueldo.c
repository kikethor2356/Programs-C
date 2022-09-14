/*
En una pequeña empresa otorgara un aumento de sueldo a sus trabajadores, considerando las siguientes características:

un aumento del 15% si su sueldo es inferior a $1,000.00 semanales
un aumento del 10% si es mayor a dicha cantidad
Imprimir el sueldo actual, la cantidad a aumentar y el sueldo bruto de cada trabajador.
*/
#include<stdio.h> 
float aumento;
float salario;
float sueltotal;
float sueldo;

void main()
{
			
	printf("Cuanto ganas a la semana \n");
	scanf("%f", &sueldo);
	while (sueldo>0)
	{
	
	
	if (sueldo<=1000) 
	{
		aumento=sueldo*0.15;
		sueltotal=aumento+sueldo;
		printf ("Este es el aumento que vas a tener%f\n", aumento);
		printf ("Este es el sueldo total ya con el aumento %f\n",sueltotal);
	}
		
	else
	{
		aumento=sueldo*0.10;
		sueltotal=aumento+sueldo;
		printf ("Este es el aumento que vas a tener %f\n", aumento);
		printf ("Este es el sueldo total ya con el aumento%f\n",sueltotal);
	}
	
	printf("Cuanto ganas a la semana \n");
	scanf("%f\n",&sueldo);
	}
}
