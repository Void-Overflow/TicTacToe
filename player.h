#ifndef PLAYER
#define PLAYER

using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

public ref class player {
public:
	static List<bool>^ ButtonStatus = gcnew List<bool>();
	player();
	bool id;

	bool set_button(Button^ button, int index);
};

#endif PLAYER