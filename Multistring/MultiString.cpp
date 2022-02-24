#include "MultiString.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Multistring::MultiString form;
	Application::Run(% form);
}