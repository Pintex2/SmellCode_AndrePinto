#pragma once
#include <iostream>
using namespace std;

class calculadora
{
private:
	float operador1;
	float operador2;
	int operador;
public:
	calculadora();
	calculadora(float, float);
	~calculadora();

	void setoperador1(float);
	void setoperador2(float);

	int menu();
	float sumar();
	float restar();
	float multiplicar();
	float dividir();
};

