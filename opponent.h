#ifndef OPPONENT
#define OPPONENT

using namespace System::Collections::Generic;

public ref class opponent{
private: 
	int place_logic();
public:
	static List<bool>^ ButtonStatus = gcnew List<bool>();
	static List<bool>^ LogicCheckFlags = gcnew List<bool>();

	opponent();
	int generate_place();
};

#endif OPPONENT
