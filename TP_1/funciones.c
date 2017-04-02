#include <stdio.h>
#include <stdlib.h>



/** \brief Recibe los numeros y realiza la suma
  * \param A primer numero ingresado
  * \param B segundo numero ingresado
  * \return resultado de la suma
  *
  */

  float suma(float x,float y)
  {
    printf("Ingrese primer operando \n");
    scanf("%f",&x);
    printf("Ingrese segundo operando \n");
    scanf("%f",&y);
    return x+y;

  }

  /** \brief Recibe los numeros y realiza la resta
  * \param A primer numero ingresado
  * \param B segundo numero ingresado
  * \return resultado de la resta
  *
  */

  float resta(float x,float y)

  {
    printf("Ingrese primer operando \n");
    scanf("%f",&x);
    printf("Ingrese segundo operando \n");
    scanf("%f",&y);
    return x-y;

  }

  /** \brief Recibe los numeros y realiza la multiplicacion
  * \param A primer numero ingresado
  * \param B segundo numero ingresado
  * \return resultado de la multiplicacion
  *
  */

  float multiplica(float x,float y)

  {
    printf("Ingrese primer operando \n");
    scanf("%f",&x);
    printf("Ingrese segundo operando \n");
    scanf("%f",&y);
    return x*y;

  }

  /** \brief Recibe los numeros y realiza la division
  * \param A primer numero ingresado
  * \param B segundo numero ingresado
  * \return resultado de la division
  *
  */

  float divide(float x,float y)

  {
    printf("Ingrese primer operando \n");
    scanf("%f",&x);
    printf("Ingrese segundo operando \n");
    scanf("%f",&y);
     if(y == 0)
     {
        printf("Error, no es posible dividir por 0 \n");
     }
     else
     {
         printf("La division es %f \n", x/y);
     }



  }


/** \brief Recibe los numeros y calcula el factorial
  * \param A numero ingresado
  * \return resultado de la ecuacion
  *
  */

  int factorial(int x)

  {
    int i;
    int fac = 1;
    for (i=2; i<=x; i=i+1) fac=fac*i;
    return (fac);


  }



