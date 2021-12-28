#include "control.h"
#include "detection.h"

#include "player.h"
#include "user.h"
#include "opponent.h"

#include "MyForm3.h"

using namespace System;
using namespace System::Drawing;
using namespace TicTacToe;

void control::load_tab() {
	MyForm3^ tabForm = gcnew MyForm3;
	tabForm->ShowDialog();
}

void control::reset_data(Button^ btn) {
	btn->BackgroundImage = Image::FromFile(Convert::ToString(Environment::CurrentDirectory + "\\images\\blank.png"));
	detection::reset_data();

	Console::Clear();
	
	player plr;
	opponent opnt;
	user usr;

	for (int i = 0; i < 9; i++) {
		plr.ButtonStatus[i] = false;
		usr.ButtonStatus[i] = false;
		opnt.ButtonStatus[i] = false;
	}
	
	for (int i = 0; i < 23; i++)
		opnt.LogicCheckFlags[i] = false;
}