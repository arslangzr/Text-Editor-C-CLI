#include "MyForm1.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project4::MyForm1 form;
	Application::Run(%form);
}


