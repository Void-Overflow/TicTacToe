#ifndef CONTROL
#define CONTROL

#include "player.h"
#include "detection.h"

using namespace System::Windows::Forms;

public ref class control : public player {
public:
	void reset_data(Button^ btn);
};

#endif CONTROL
