#include "player.h"

using namespace System;
using namespace System::Drawing;

player::player() {
	for (int i = 0; i < 9; i++) 
		ButtonStatus->Add(false);
}

bool player::set_button(Button^ button, int index) {
	if (ButtonStatus[index] != true) {
		if (id == 1) {
			button->BackgroundImage = Image::FromFile(Convert::ToString(Environment::CurrentDirectory + "\\images\\o.png"));
			ButtonStatus[index] = true;
			id = 0;
		}
		else {
			button->BackgroundImage = Image::FromFile(Convert::ToString(Environment::CurrentDirectory + "\\images\\x.png"));
			ButtonStatus[index] = true;
			id = 1;
		}

		return true;
	} else {
		return false;
	}
}