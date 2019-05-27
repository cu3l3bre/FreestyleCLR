
#include "MainFenster.h"



using namespace System;
using namespace System::Windows::Forms;
using namespace FreestyleCLR;


[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	MainFenster^ fenster1 = gcnew MainFenster;

	
	Application::Run(fenster1);

}