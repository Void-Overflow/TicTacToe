#ifndef USER
#define USER

using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

public ref class user{
public:
	static List<bool>^ ButtonStatus = gcnew List<bool>();
	user();

	int set_button(Button^ button, int index);
};

#endif USER