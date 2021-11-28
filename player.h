#ifndef PLAYER
#define PLAYER

using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

public ref class player {
protected:
	static List<bool>^ ButtonStatus = gcnew List<bool>();
public:
	player();
	bool id;

	bool set_button(Button^ button, int index);
};

#endif PLAYER