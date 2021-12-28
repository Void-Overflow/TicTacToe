#include "user.h"
#include "detection.h"
#include "opponent.h"

using namespace System;
using namespace System::Drawing;

user::user() {
	for (int i = 0; i < 9; i++)
		ButtonStatus->Add(false);
}

int user::set_button(Button^ button, int index) {
	index--;
	if (ButtonStatus[index] != true) {
		button->BackgroundImage = Image::FromFile(Convert::ToString(Environment::CurrentDirectory + "\\images\\o.png"));

		ButtonStatus[index] = true;
		detection::set_data(index + 1, 0);

		opponent response;
		opponent::ButtonStatus = ButtonStatus;

		int place = response.generate_place();
		ButtonStatus[place] = true;
		detection::set_data(place + 1, 1);

		return place;
	}
	else 
		return 10;
}