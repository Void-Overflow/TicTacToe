#include "control.h"
#include "detection.h"

using namespace System;
using namespace System::Drawing;

void control::reset_data(Button^ btn) {
	btn->BackgroundImage = Image::FromFile(Convert::ToString(Environment::CurrentDirectory + "\\images\\blank.png"));
	detection::reset_data();

	Console::Clear();

	for (int i = 0; i < 9; i++)
		ButtonStatus[i] = false;
}