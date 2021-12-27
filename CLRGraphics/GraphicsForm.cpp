#include "GraphicsForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CLRGraphics::GraphicsForm form;
	Application::Run(% form);
}