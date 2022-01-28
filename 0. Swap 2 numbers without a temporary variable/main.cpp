// Swap two number without using temporary variable

#include <iostream>


int main()
{
	int x{13},y{15};


	// Method 1 - with addition and subtraction

	x = x + y; // x becomes 28
	y = x - y; // y becomes 28-15 = 13
	// remember x still 28
	
	// x still 28 but y is already 13
	// in order to make x = 15, we can easily subtract 28 with 13
	// and put it on x
	x = x - y; // now x become 28-13 = 15;

	std::cout << "After Swapping x=" << x << " and y=" << y << std::endl;


	// Method 2 - with bitwise XOR
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;

	std::cout << "After Swapping x=" << x << " and y=" << y << std::endl;



	return 0;
}