#include "stdafx.h"  //________________________________________ EjerciciosRecursividad.cpp
#include "EjerciciosRecursividad.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	EjerciciosRecursividad app;
	return app.BeginDialog(IDI_EjerciciosRecursividad, hInstance);
}

void EjerciciosRecursividad::Window_Open(Win::Event& e)
{
}

void EjerciciosRecursividad::tbxEntrada_Change(Win::Event& e)
{
	const int numero = tbxEntrada.IntValue;
	tbxSalida.IntValue = Factorial(numero);
}
unsigned int EjerciciosRecursividad::Factorial(unsigned int numero)
{
	unsigned int factorial;
	if (numero == 0)
	{
		return 1;
	}
	else
	{
		return numero*Factorial(numero - 1);
	}
}

