#include "Login.h"
#using "mscorlib.dll"
#using "System.Windows.Forms.dll"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	salesSystemDemo::Login login;
	Application::Run(%login);

	return 0;
}
