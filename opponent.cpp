#include "opponent.h"

using namespace System;

int opponent::place_logic() {
	return 0;
}

int opponent::generate_place() {
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
	
	return place; 
}