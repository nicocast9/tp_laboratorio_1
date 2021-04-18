/*
 * Funciones.c
 *
 *  Created on: 17 abr. 2021
 *      Author: J. Nicolás Ezequiel Castaño / 1°A
 */

#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

	int menu(void)
	{
		int opcion;

		printf("\n1. Ingresar primer operando");
		printf("\n2. Ingresar segundo operando");
		printf("\n3.Realizar todas las operaciones");
		printf("\n4. Informar el resultado de las operaciones");
		printf("\n5. Salir");

		scanf("%d", &opcion);

		return opcion;
	}

	float num1(void)
	{
		float numero1;

		printf("\nIngrese un valor para el primer operando");
		scanf("%f", &numero1);

		return numero1;
	}

	float num2(void)
		{
			float numero2;

			printf("\nIngrese un valor para el segundo operando");
			scanf("%f", &numero2);

			return numero2;
		}

	float sumar(float numero1, float numero2)
	{
		float resultado_Suma;

		resultado_Suma = (float)numero1 + numero2;

		return resultado_Suma;
	}

	float restar(float numero1, float numero2)
	{
		float resultado_Resta;

		resultado_Resta = (float)numero1 - numero2;

		return resultado_Resta;
	}

	float dividir(float numero1, float numero2)
	{
		float resultado_Div;

		resultado_Div = (float)numero1 / numero2;

		return resultado_Div;
	}

	float multiplicar(float numero1, float numero2)
	{
		float resultado_Mult;

		resultado_Mult = (float)numero1 * numero2;

		return resultado_Mult;
	}
