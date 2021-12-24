#include "control.h"
#include "detection.h"

#include "player.h"
#include "user.h"

using namespace System;
using namespace System::Drawing;

void control::reset_data(Button^ btn) {
	btn->BackgroundImage = Image::FromFile(Convert::ToString(Environment::CurrentDirectory + "\\images\\blank.png"));
	detection::reset_data();

	Console::Clear();
	
	player plr;
	user usr;

	for (int i = 0; i < 9; i++) {
		plr.ButtonStatus[i] = false;
		usr.ButtonStatus[i] = false;
	}
}