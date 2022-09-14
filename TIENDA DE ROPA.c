#include<stdio.h>
//Una tienda de artículos deportivos realiza ventas de menudeo y de mayoreo solo en ropa deportiva, crea un programa para calcular cuánto tiene que pagar un cliente considerando los siguientes requerimientos:
//Si un cliente realiza una compra de mayoreo se le indica el porcentaje de descuento a aplicar, el monto de la compra, la cantidad a descontar, el total de la compra.
//Si la compra es menor a 5 prendas no hay descuento.
//Si la venta es mayor a 5 y menor o igual a 10 prendas de ropa el descuento es del 5%
//Si la venta es mayor a 10 y menor a 15 prendas de ropa el descuento es del 8%
//Si la venta es mayor a 15 prendas de ropa el descuento es del 12%

//Fecha de inicio: 02/09/22
//Fecha de final:02/09/2022
//Autor Enrique Alejandro Cisneros Gutiérrez.
//DE: porce (Porcentaje del descuento) tipo entero, PrecioPs (Precio a pagar sin descuento ) tipo real,
//DS: PrecioPS (Precio a pagar sin descuento) tipo real, CanDes (Cantidad de descuento) tipo real,CanT (Cantidad total) tipo real.
//tipo real CanDes (Cantidad a descontar) tipo real, CanT(Cantidad total a pagar) tipo real, CanPre(Cantidad de prendas) tipo entero.
//DP: CanDes=Des*PrecioPs,CanT=PrecioPs-Des

float Des;
float PrecioPs;
float CanDes;
float CanT;
int CanPre;
int porce;
int main()
{


    printf("Ingresala cantidad de prendas");
    scanf("%i",& CanPre);
    printf ("Ingresar el precio de las prendas");
    scanf("%f", &PrecioPs);

    if  (CanPre <5)
      {
          Des=0.0;
          porce=0;
      }

     if ((CanPre >5) && (CanPre <=10))
        {

        Des=0.05;
        porce=5;
        }
     if ((CanPre>10)&&(CanPre<15))
     {
        Des=0.08;
        porce=8;
     }
     if  (CanPre>15)
     {
        Des=0.12;
        porce=12;
     }

        CanDes=Des*PrecioPs;
        CanT=PrecioPs-Des;
        printf("Porcentaje deL descuento aplicado es = %.1f\n","%",porce);
        printf("Precio de prendas = %.2f\n",PrecioPs);
        printf("Cantidad a descontar = %.2f\n",CanDes);
        printf("Total de la compra = %.2f\n",CanT);
    return 0;
}
