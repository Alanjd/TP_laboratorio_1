/****************************************************************************************************************
* Programa: Calculadora
* Titulo : TP_laboratorio_1
*
* Objetivo : crear un programa que realice operaciones de una calculadora, capaz de asignar dos numeros
*            flotantes que puedan realizar operaciones de suma, resta, multiplicacion, division y factoreo
*            de los dos operandos por separado con sus respectivos resultados.
*
* Version: 1 del 7 de Septiembre de 2018
*
* Autor: Alan Jaime
* Division: 1 F
****************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main()
{


    float op1=0,op2=0;
    float resulsuma;
    float resulresta;
    float resulmultiplicacion;
    float resuldivision;
    float resulfactorialA;
    float resulfactorialB;

    int opcion;



    do{

       system ("cls");
       printf("--------CALCULADORA--------\n\n");


       printf("\n1-Ingrese Primer operando: A=%.0f ",op1);
       printf("\n2-Ingrese Segundo operando: B=%.0f ",op2);
       printf("\n3-Calcular todas las operaciones: ");
       printf("\n4-Informar resultados: ");
       printf("\n5-Salir: ");

       printf("\n\nIngrese opcion: ");
       scanf("\n\n\n%d",&opcion);


       switch(opcion){

        case 1:
        printf("\nIngrese el primer operando: ");
        scanf("%f",&op1);
        break;

        case 2:
        printf("\nIngrese el segundo operando: ");
        scanf("%f",&op2);
        break;

        case 3:
        resulsuma= suma(op1,op2);
        resulresta= resta(op1,op2);
        resulmultiplicacion= multiplicacion(op1,op2);
        resuldivision=division(op1,op2);
        resulfactorialA=factorialA(op1);
        resulfactorialB=factorialB(op2);

        break;

        case 4:
        printf ("\n\nEl resultado de A+B= %.0f", resulsuma);
        printf ("\nEl resultado de A-B= %.0f", resulresta);
        printf ("\nEl resultado de A*B= %.0f", resulmultiplicacion);
        printf ("\nEl resultado de A/B= %.2f", resuldivision);
        printf ("\nEl Factorial de A= %.0f El Factorial de B= %.0f\n\n", resulfactorialA, resulfactorialB);



        system("pause");

        break;



       }




    } while (opcion!= 5);

   return 0;

}
