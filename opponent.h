#ifndef OPPONENT
#define OPPONENT

using namespace System::Collections::Generic;

public ref class opponent{
public:
	static List<bool>^ ButtonStatus;

	int place_logic();
	int generate_place();
};

#endif OPPONENT
