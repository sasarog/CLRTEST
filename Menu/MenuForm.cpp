#include "MenuForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	this Menu::MenuFo form;
	Application::Run(% form);
}