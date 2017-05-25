#pragma once  //______________________________________ EjerciciosRecursividad.h  
#include "Resource.h"
class EjerciciosRecursividad: public Win::Dialog
{
public:
	EjerciciosRecursividad()
	{
	}
	~EjerciciosRecursividad()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Label lb2;
	Win::Textbox tbxEntrada;
	Win::Textbox tbxSalida;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(240);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(72);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjerciciosRecursividad";
		lb1.Create(NULL, L"Numero", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 6, 4, 120, 25, hWnd, 1000);
		lb2.Create(NULL, L"Factorial", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 6, 39, 120, 25, hWnd, 1001);
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 124, 4, 109, 25, hWnd, 1002);
		tbxSalida.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 126, 40, 107, 25, hWnd, 1003);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		lb2.Font = fontArial014A;
		tbxEntrada.Font = fontArial014A;
		tbxSalida.Font = fontArial014A;
	}
	//_________________________________________________
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
