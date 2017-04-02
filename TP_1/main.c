#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <ctype.h>



float main()
{
    char seguir='s';
    int opcion=0;
    float A;
    float B;
    long int fac;
    long long int resultadoFac;
    float resultado;

    while(seguir=='s')
    {
        printf("1- Calcular la suma (A+B)\n");
        printf("2- Calcular la resta (A-B)\n");
        printf("3- Calcular la division (A/B)\n");
        printf("4- Calcular la multiplicacion (A*B)\n");
        printf("5- Calcular el factorial (A!)\n");
        printf("6- Calcular todas las operacione\n");
        printf("7- Salir\n");
        scanf("%d",&opcion);

    while(opcion <=0 || opcion >=8)
    {
        printf("Error, ingrese las opciones entre el 1 y el 7 \n");
        printf("1- Calcular la suma (A+B)\n");
        printf("2- Calcular la resta (A-B)\n");
        printf("3- Calcular la division (A/B)\n");
        printf("4- Calcular la multiplicacion (A*B)\n");
        printf("5- Calcular el factorial (A!)\n");
        printf("6- Calcular todas las operacione\n");
        printf("7- Salir\n");
        scanf("%d",&opcion);
    }
       switch(opcion)
        {

            case 1:
             resultado = suma(A,B);
             printf("La suma es %f \n", resultado);
                break;
            case 2:
             resultado = resta(A,B);
             printf("La resta es %f \n", resultado);
            break;
            case 3:
             resultado = divide(A,B);
             break;
            case 4:
             resultado = multiplica(A,B);
             printf("La multiplicación es %f \n", resultado);
            break;
            case 5:
             printf("Ingresar un número entero para calcular el factorial \n");
             scanf("%d", &fac);
               if(fac <= 0)
             {
                printf("No es posible calcular factorial a numeros negativos \n");
             }
             else
             {
                resultadoFac = factorial(fac);
                printf("El factorial es %d \n", resultadoFac);
             }

                break;
            case 6: //todas las operaciones
             printf("Ingrese primer operando \n");
             scanf("%f", &A);

             printf("Ingrese segundo operando \n");
             scanf("%f", &B);
             resultado = A+B;
             printf("La suma es %f \n", resultado);

             resultado = (A-B);
             printf("La resta es %f \n", resultado);

             resultado = (A/B);
             printf("La division es %f \n", resultado);

             resultado = (A*B);
             printf("La multiplicacion es %f \n", resultado);
             fac= A;
             if(fac <= 0)
             {
                printf("No es posible calcular factorial a numeros negativos \n");
             }
             else
             {
                resultadoFac = factorial(fac);
                printf("El factorial es %d \n ", resultadoFac);
             }
             break;


            case 7:
                seguir = 'n';
                break;
        }



}
return 0;
}
