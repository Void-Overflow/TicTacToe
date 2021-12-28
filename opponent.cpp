#include "opponent.h"

using namespace System;

opponent::opponent() {
	for (int i = 0; i < 9; i++)
		ButtonStatus->Add(false);

	for (int i = 0; i < 23; i++)
		LogicCheckFlags->Add(false);
}

int opponent::place_logic() {
	if (ButtonStatus[0] == true && ButtonStatus[4] == true && LogicCheckFlags[18] == false) {
		LogicCheckFlags[18] = true;
		return 8;
	}
	else if (ButtonStatus[4] == true && ButtonStatus[8] == true && LogicCheckFlags[19] == false) {
		LogicCheckFlags[19] = true;
		return 0;
	}
	else if (ButtonStatus[0] == true && ButtonStatus[8] == true && LogicCheckFlags[20] == false) {
		LogicCheckFlags[20] = true;
		return 4;
	}

	else if (ButtonStatus[2] == true && ButtonStatus[6] == true && LogicCheckFlags[21] == false) {
		LogicCheckFlags[21] = true;
		return 4;
	}
	else if (ButtonStatus[4] == true && ButtonStatus[6] == true && LogicCheckFlags[22] == false) {
		LogicCheckFlags[22] = true;
		return 2;
	}
	else if (ButtonStatus[2] == true && ButtonStatus[4] == true && LogicCheckFlags[23] == false) {
		LogicCheckFlags[23] = true;
		return 6;
	}

	else if (ButtonStatus[0] == true && ButtonStatus[3] == true && LogicCheckFlags[9] == false) {
		LogicCheckFlags[9] = true;
		return 6;
	}
	else if (ButtonStatus[3] == true && ButtonStatus[6] == true && LogicCheckFlags[10] == false) {
		LogicCheckFlags[10] = true;
		return 0;
	}
	else if (ButtonStatus[0] == true && ButtonStatus[6] == true && LogicCheckFlags[11] == false) {
		LogicCheckFlags[11] = true;
		return 3;
	}
	
	else if (ButtonStatus[1] == true && ButtonStatus[4] == true && LogicCheckFlags[12] == false) {
		LogicCheckFlags[12] = true;
		return 7;
	}
	else if (ButtonStatus[4] == true && ButtonStatus[7] == true && LogicCheckFlags[13] == false) {
		LogicCheckFlags[13] = true;
		return 1;
	}
	else if (ButtonStatus[1] == true && ButtonStatus[7] == true && LogicCheckFlags[14] == false) {
		LogicCheckFlags[14] = true;
		return 4;
	}

	else if (ButtonStatus[2] == true && ButtonStatus[5] == true && LogicCheckFlags[15] == false) {
		LogicCheckFlags[15] = true;
		return 8;
	}
	else if (ButtonStatus[5] == true && ButtonStatus[8] == true && LogicCheckFlags[16] == false) {
		LogicCheckFlags[16] = true;
		return 2;
	}
	else if (ButtonStatus[2] == true && ButtonStatus[8] == true && LogicCheckFlags[17] == false) {
		LogicCheckFlags[17] = true;
		return 5;
	}

	else if (ButtonStatus[0] == true && ButtonStatus[1] == true && LogicCheckFlags[0] == false) {
		LogicCheckFlags[0] = true;
		return 2;
	}

	else if (ButtonStatus[1] == true && ButtonStatus[2] == true && LogicCheckFlags[1] == false) {
		LogicCheckFlags[1] = true;
		return 0;
	}
	else if (ButtonStatus[0] == true && ButtonStatus[2] == true && LogicCheckFlags[2] == false) {
		LogicCheckFlags[2] = true;
		return 1;
	}

	else if (ButtonStatus[3] == true && ButtonStatus[4] == true && LogicCheckFlags[3] == false) {
		LogicCheckFlags[3] = true;
		return 5;
	}
	else if (ButtonStatus[4] == true && ButtonStatus[5] == true && LogicCheckFlags[4] == false) {
		LogicCheckFlags[4] = true;
		return 3;
	}
	else if (ButtonStatus[3] == true && ButtonStatus[5] == true && LogicCheckFlags[5] == false) {
		LogicCheckFlags[5] = true;
		return 4;
	}

	else if (ButtonStatus[6] == true && ButtonStatus[7] == true && LogicCheckFlags[6] == false) {
		LogicCheckFlags[6] = true;
		return 8;
	}
	else if (ButtonStatus[7] == true && ButtonStatus[8] == true && LogicCheckFlags[7] == false) {
		LogicCheckFlags[7] = true;
		return 6;
	}
	else if (ButtonStatus[6] == true && ButtonStatus[8] == true && LogicCheckFlags[8] == false) {
		LogicCheckFlags[8] = true;
		return 7;
	}

	Random^ rand = gcnew Random();
	return Convert::ToInt16(rand->Next(0, 8));
}

int opponent::generate_place() {
	int place = place_logic();

	if (ButtonStatus[place] == true) {
		int counter = 0;
		for (int i = 0; i < 9; i++) {
			if (ButtonStatus[i] == true)
				counter++;
			if (counter == 8)
				return 11;
		}
		while (ButtonStatus[place] == true) {
			place = place_logic();

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