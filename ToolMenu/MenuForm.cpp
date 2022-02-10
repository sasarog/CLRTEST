#include "MenuForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ToolMenu::MenuForm form;
	Application::Run(% form);
}