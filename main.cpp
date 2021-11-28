#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main() {
	TicTacToe::MyForm form;
	Application::Run(% form);

	return 0;
}