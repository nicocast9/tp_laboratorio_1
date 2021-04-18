/*
 * Funciones.h
 *
 *  Created on: 16 abr. 2021
 *      Author: J. Nicolás Ezequiel Castaño / 1°A
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

	float num1(void);
	/**
	 * @fn float num1(void);
	 *
	 * @brief Función que le pide al usuario el valor del primer operando.
	 *
	 * @return Devuelve el valor del primer operando.
	 */

	float num2(void);
	/**
	 * @fn float num2(void);
	 *
	 * @brief Función que le pide al usuario el valor del segundo operando.
	 *
	 * @return Devuelve el valor del segundo operando.
	 */

	float sumar(float numero1, float numero2);
	/**
	 * @fn float sumar(float numero1, float numero2);
	 *
	 * @brief Función que realiza una suma entre los dos flotantes.
	 *
	 * @param float numero1 primer número flotante.
	 *
	 * @param float numero2 segundo número flotante.
	 *
	 * @return float sumar Devuelve el resultado de la suma entre los dos flotantes.
	 */

	float restar(float numero1, float numero2);
	/**
	 * @fn float restar(float numero1, float numero2);
	 *
	 * @brief funcion que realiza una resta entre los dos flotantes.
	 *
	 * @param float numero1 primer numero flotante.
	 *
	 * @param float numero2 segundo numero flotante.
	 *
	 * @return float restar Devuelve el resultado de la resta entre los dos flotantes.
	 */

	float dividir(float numero1, float numero2);
	/**
	 * @fn float dividir(float numero1, float numero2);
	 *
	 * @brief Función que realiza una división entre los dos flotantes.
	 *
	 * @param float numero1 primer número flotante.
	 *
	 * @param float numero2 segundo número flotante.
	 *
	 * @return float dividir devuelve el cociente de la división entre los flotantes.
	 */

	float multiplicar(float numero1, float numero2);
	/**
	 * @fn float multiplicar(float numero1, float numero2);
	 *
	 * @brief funcion que multiplica a los flotantes.
	 *
	 * @param float numero1 primer número flotante.
	 *
	 * @param float numero2 segundo número flotante.
	 *
	 * @return float multiplicar Devuelve el producto de la multiplicación entre los flotantes.
	 */

	unsigned long int factorial();
	/**
	 * @fn unsigned long int factorial(factorA);
	 *
	 * @brief Función que busca el factorial de un número entero.
	 *
	 * @param int número entero.
	 *
	 * @return unsigned long int factorial Devuelve el resultado del Factorial del entero.
	 */

	int menu(void);
	/**
	 * @fn int menu(void);
	 *
	 * @brief un Menú interactivo con opciones.
	 *
	 * @param float x Recibe un valor ingresado por el usuario.
	 *
	 * @param float y Recibe un valor ingresado por el usuario.
	 *
	 * @return int menu Devuelve una opción del 1 al 5 que luego es utilizada por el switch.
	 * */

#endif /* FUNCIONES_H_ */
