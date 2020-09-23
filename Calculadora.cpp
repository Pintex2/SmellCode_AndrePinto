#include "pch.h"
#include "calculadora.h"

//constructores
calculadora::calculadora()
{
}

calculadora::calculadora(float voperador1, float voperador2)
{
	operador1 = voperador1;
	operador2 = voperador2;
}

calculadora::~calculadora()
{
}

//Les asignamos un valor con los metodos setoperador
void calculadora::setoperador1(float op1)
{
	operador1 = op1;
}

void calculadora::setoperador2(float op2)
{
	operador2 = op2;
}

//metodo menu de la calculadora
int calculadora::menu()
{
	cout << "=======menu=======" << endl;
	cout << "1.- suma" << endl;
	cout << "2.- resta" << endl;
	cout << "3.- multiplicacion" << endl;
	cout << "4.- division" << endl;
	cout << "5.- salir" << endl;
	cout << "ingrese numero:" << endl;
	cin >> operador;
	return operador;
}

//Metodos propios de calculadora
float calculadora::sumar()
{
	float suma;
	suma = operador1 + operador2;
	return suma;
}

float calculadora::restar()
{
	float resta;
	resta = operador1 - operador2;
	return resta;
}

float calculadora::multiplicar()
{
	float mult;
	mult = operador1 * operador2;
	return mult;
}

float calculadora::dividir()
{
	float div;
	div = operador1 / operador2;
	return div;
}