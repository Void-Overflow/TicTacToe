#include "user.h"
#include "detection.h"

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

		Random^ rand = gcnew Random();
		int place = Convert::ToInt16(rand->Next(1, 9));

		if (ButtonStatus[place] == true) {
			int counter = 0;
			for (int i = 1; i < 9; i++) {
				if (ButtonStatus[i] == true)
					counter++;
				if (counter == 8)
					return 11;
			}
			while (ButtonStatus[place] == true) {
				place = Convert::ToInt16(rand->Next(1, 9));

				if (ButtonStatus[place] != true) {
					ButtonStatus[place] = true;
					break;
				}
			}
		}
		else 
			ButtonStatus[place] = true;

		detection::set_data(place + 1, 1);

		return place;
	}
	else 
		return 10;
}