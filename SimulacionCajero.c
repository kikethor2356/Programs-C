/*
Hacer la simulación de un cajero automático en el cual se pueda ingresar saldo, retirar, consultar saldo y salir, 
al iniciar el programa deberá mostrar el saldo inicial el cual es de $1,850.00
De:Operacion elegida por el cliente 
Ds:Consultar saldo, Retirar, Deposito,salir 
Dp:restante=sal-reti
*/



#include<stdio.h>
int num;
float sal, reti, depo;
int numdepo;
void main(){

sal=1850.00;
num=1;
	do{
	
		printf ("\nQue operacion necesitas hacer\n");
		printf("Consultar saldo(1)\n");
		printf ("Retirar(2)\n");
		printf ("Deposito(3)\n");
		printf  ("Salir (4)\n");
		scanf ("%i",&num);
	
		switch (num)
		{	
		case 1:
				printf(" Este es su salario verifique que sea la cantidad correcta %f",sal);
				break;
			
		case 2:
				printf("Cuanto deseas retirar\n");
				printf ("Saldo%.2f\n ",sal);
				scanf("%f",&reti);
				printf ("%.2f",reti);
				sal=sal-reti;
				printf("\nProcediendo a entregar \n %.2f",reti);
				printf ("\nSaldo restante: %.2f\n",sal);
				break;
		case 3:
				printf ("Cuanto quiere depositar\n");
				scanf ("%f",&depo); 
				printf ("%.2f\n",depo);
				printf ("Ingrese el numero de la cuenta a depositar\n");
				scanf("%i",&numdepo);
				printf("%i\n",numdepo);
				printf ("Verifique el numero de la cuenta antes de hacer la operacion");
				
				break;
		case 4:
				printf ("Gracias por su operacion vuelva pronto");
				break;
				
		default:
			printf ("Ingrese el numero correspondiente de la operacion que desea realizar ");	
	
		}
			
			
	}while(num!=4);
	
}	
