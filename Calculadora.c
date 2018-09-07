#include <stdio.h>
#include <stdlib.h>

/**
*\brief suma recibe dos datos de variables flotantes
*\param se declara una varible flotante resultado
*\param a la varable resultado se le asigna la suma de las dos variables
*\return El resultado
*/
float suma(float A,float B){

    float resultado;
    resultado= A+B;
    return resultado;
}

/**
*\brief resta recibe dos datos de variables flotantes
*\param se declara una varible flotante resultado
*\param a la varable resultado se le asigna la resta de las dos variables
*\return El resultado
*/
float resta(float A,float B){

    float resultado;
    resultado= A-B;
    return resultado;
}

/**
*\brief multiplicacion recibe dos datos de variables flotantes
*\param se declara una varible flotante resultado
*\param a la varable resultado se le asigna la multiplicacion de las dos variables
*\return El resultado
*/
float multiplicacion(float A,float B){

    float resultado;
    resultado= A*B;
    return resultado;
}
/**
*\brief division recibe dos datos de variables flotantes
*\param si la varable A es mayor a cero y B igual a cero
*\param error
*\param sino resultado igual a A dividendo B
*\return El resultado
*/
float division(float A,float B){

    float resultado;
    if (A>=0 && B==0){
        printf("Error no se puede dividir por cero reingrese el numero\n");
        system("pause");

    }
    else
        resultado= A/B;
        return resultado;
}


/**
*\brief Factorial recibe el flotante de A
*\param se inicializa la variable flotante de factorial en 1
*\param se delcara la variable de iteracion
*\param se inicia el bucle for
*\return El resultado
*/
float factorialA(float A){

   float factorial=1;
   float i;

   for (i=A;i>=1;i--){

        factorial=factorial*i;

   }

   return factorial;
}

/**
*\brief Factorial recibe el flotante de B
*\param se inicializa la variable flotante de factorial en 1
*\param se delcara la variable de iteracion
*\param se inicia el bucle for
*\return El resultado
*/
float factorialB(float B){

   float factorial2=1;
   float i;

   for (i=B;i>=1;i--){

        factorial2=factorial2*i;

   }

   return factorial2;
}



