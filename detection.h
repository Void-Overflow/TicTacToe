#ifndef DETECTION
#define DETECTION

ref struct data {
public :
	static int one = 10;
	static int two = 2;
	static int three = 3;
	static int four = 4;
	static int five = 5;
	static int six = 6;
	static int seven = 7;
	static int eight = 8;
	static int nine = 9;
} typedef data;

ref class detection : public data{
public: 
	static void set_data(int space, bool player);
	static void reset_data();

	static int check();
};

#endif DETECTION
