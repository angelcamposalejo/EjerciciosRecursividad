#include "stdafx.h"  //________________________________________ EjerciciosRecursividad.cpp
#include "EjerciciosRecursividad.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	EjerciciosRecursividad app;
	return app.BeginDialog(IDI_EjerciciosRecursividad, hInstance);
}

void EjerciciosRecursividad::Window_Open(Win::Event& e)
{
}

