#include "detection.h"

using namespace System;

void detection::set_data(int space, bool player) {
	if (space == 1)
		one = player;
	if (space == 2)
		two = player;
	if (space == 3)
		three = player;
	if (space == 4)
		four = player;
	if (space == 5)
		five = player;
	if (space == 6)
		six = player;
	if (space == 7)
		seven = player;
	if (space == 8)
		eight = player;
	if (space == 9)
		nine = player;

	Console::WriteLine(Convert::ToString(space) + " " + Convert::ToString(player));
}

int detection::check(){
	if (one == two && one == three)
		return one;
	else if (one == four && one == seven)
		return one;
	else if (one == five && one == nine)
		return one;
	else if (two == five && two == eight)
		return two;
	else if (four == five && four == six)
		return four;
	else if (three == six && three == nine)
		return three;
	else if (three == five && three == seven)
		return three;
	else if (seven == eight && seven == nine)
		return seven;
	else
		return 9;
}

void detection::reset_data() {
	one = 1;
	two = 2;
	three = 3;
	four = 4;
	five = 5;
	six = 6;
	seven = 7;
	eight = 8;
	nine = 9;
}