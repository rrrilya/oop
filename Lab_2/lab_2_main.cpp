#include "Computer.h"

int main()
{
	Computer comp1;
	Computer comp2("Intel Core i5", 8, 500);
	Computer comp3(comp2);

	std::cout << "Computer 1:" << std::endl;
	comp1.show();
	std::cout << "Computer 2:" << std::endl;
	comp2.show();
	std::cout << "Computer 3:" << std::endl;
	comp3.show();

	
	comp1.setram(4);
	std::cout << "Computer 1 after RAM change:" << std::endl;
	comp1.show();

	return 0;
}
