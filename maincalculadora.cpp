#include "pch.h"
#include "Calculadora.h"

int main()
{
	calculadora miCalculadora;
	int op;
	float numero1, numero2, respuesta;

	do
	{
		op = miCalculadora.menu();
		if (op != 5 && op < 5)
		{
			cout << "Ingrese el primer numero: ";
			cin >> numero1;
			miCalculadora.setoperador1(numero1);
			cout << "Ingrese el segundo numero: ";
			cin >> numero2;
			miCalculadora.setoperador2(numero2);
		}
		
		switch (op)
		{
		case 1:
			respuesta = miCalculadora.sumar();
			cout << "la suma es" << respuesta << endl;
			break;

		case 2:
			respuesta = miCalculadora.restar();
			cout << "la resta es" << respuesta << endl;
			break;

		case 3:
			respuesta = miCalculadora.multiplicar();
			cout << "la multiplicacion es" << respuesta << endl;
			break;

		case 4:
			respuesta = miCalculadora.dividir();
			cout << "la divicion es" << respuesta << endl;
			break;
		}
	} while (op != 5);
}