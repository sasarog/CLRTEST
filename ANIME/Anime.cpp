#include "Anime.h"



using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ANIME::Anime form;
	Application::Run(% form);
}