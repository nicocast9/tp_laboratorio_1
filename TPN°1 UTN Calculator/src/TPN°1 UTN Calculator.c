/*
 ============================================================================
 Name        : TPN°1.c
 Author      : J. Nicolás Ezequiel Castaño / 1°A
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 * 1. Ingresar 1er operando (A=x)
 * 2. Ingresar 2do operando (B=y)
 * 3. Calcular todas las operaciones
 *    a) Calcular la suma (A+B)
 *    b) Calcular la resta (A-B)
 *    c) Calcular la división (A/B)
 *    d) Calcular la multiplicación (A*B)
 *    e) Calcular el factorial (A!)
 * 4. Informar resultados
 *    a) “El resultado de A+B es: r”
 *    b) “El resultado de A-B es: r”
 *    c) “El resultado de A/B es: r” o “No es posible dividir por cero”
 *    d) “El resultado de AB es: r”
 *    e) “El factorial de A es: r1 y El factorial de B es: r2”
 * 5. Salir
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define INGRESADO 1
#define NO_INGRESADO 0

	int main(void)
	{
		int opciones;
		float operando1;
		float operando2;
		float suma;
		float resta;
		float division;
		float multiplicacion;
		//long long int factorX;
		//long long int factorY;
		float flagNumero1;
		float flagNumero2;
		char respuesta;

		respuesta = 's';

		setbuf(stdout, NULL);

	do
	{
		opciones = menu();

		switch(opciones)
		{
			case 1:
				operando1 = num1();
				flagNumero1 = INGRESADO;
				break;

			case 2:
				operando2 = num2();
				flagNumero2 = INGRESADO;
				break;

			case 3:
				if(flagNumero1 == INGRESADO && flagNumero2 == INGRESADO)
				{
					suma = sumar(operando1,operando2);
					resta = restar(operando1,operando2);
					multiplicacion = multiplicar(operando1,operando2);
					division = dividir(operando1,operando2);
					//factorX	= factorial(operando1);
					//factorY = factorial(operando2);

					printf("Realizando operaciones, espere...");
				}
				else
				{
					printf("ERROR, verifique que haya ingresado los valores correctamente \n");
				}
				break;

			case 4:
				printf("El resultado de la suma de %.2f + %.2f es : %.2f", operando1, operando2, suma);
				printf("\nEl resultado de la resta de %.2f - %.2f es: %.2f", operando1, operando2, resta);
				printf("\nEl resultado de la multiplicación de %.2f * %.2f es: %.2f", operando1, operando2, multiplicacion);
				printf("\nEl resultado de la división de %.2f / %.2f es: %.2f", operando1, operando2, division);
				//printf("\nEl factorial de &d es: %d y el factorial de %d es: %d\n",(int)operando1,factorX,(int)operando2,factorY);
				break;

			case 5:
				printf("\n¡Gracias por utilizar UTN Calculator!");
				respuesta = 'n';
				break;
		}

	}
	while(respuesta == 's');

	return 0;

}

/*unsigned long int Factorial;
{
	unsigned long int factor;

	if(a==1||a==0)
	{
		factor=1;
	}
	else
	{
		factor= a*Factorial(a-1);
	}

	return factor;
}
*/
