/*
En la escuela “X” requiere realizar las estadísticas de un grupo de 40 alumnos,
para lo cual el programa permitirá contar cuantos alumnos pertenecen a la siguiente 
categoría e indicar la calificación cualitativa de cada alumno:
Autor Cisneros Gutierrez Enrique Alejandro 
Fecha inicio 09/09/2022 	Fin 09/09/2022

De:Cal (Calificaciones)
DS: Aprobados, reprobados, excelentes, notables, sobresalientes.
Dp:(cal>0) && (cal<5), (cal>5) && (cal<6.5), (cal>6.5) && (cal<8.5 ),(cal>8.5) && (cal<10) 
*/
#include <stdio.h>

void main(){

	int  aprobado, reprobado, notable, sobresaliente, excelente, val;
	float cal;
	aprobado=0;
	reprobado=0;
	notable=0;
	sobresaliente=0;
	excelente=0;
	
	
	for (val=1;val<=40; val++)
	{
	
		printf ("\nIngresa la calificacion:\n ");
		scanf ("%f",&cal);
		
			if ((cal>0) && (cal<5))
			{
				printf ("Estas reprobado\n");
				reprobado=reprobado+1;
			}
		
			if ((cal>5) && (cal<6.5))
			{
				printf ("Calificaciones de aprobado\n");
				aprobado=aprobado+1;
			}
		
			if ((cal>6.5) && (cal<8.5 ))
			{
				printf ("Calificaciones notables \n");
				notable=notable+1;
			}
		
				if  ((cal>8.5) && (cal<10))
				{
				printf ("Calificaciones sobresalientes\n");
					sobresaliente=sobresaliente+1;
				}
		
					if (cal>=10)
					{
						printf ("Calificaciones excelentes");
						excelente=excelente+1;
					}
		
		
	}
	printf ("calificaciones excelentes: %i",excelente);
	printf ("\nsobresalientes: %i",sobresaliente);
	printf ("\nnotables: %i",notable);
	printf ("\naprobados: %i",aprobado);
	printf ("\nreprobados: %i",reprobado);
	
}
