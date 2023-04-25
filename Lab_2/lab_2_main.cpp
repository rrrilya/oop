#include "Computer.h"

int main()
{
	// Создание объектов класса Computer с помощью разных конструкторов
	Computer comp1;
	Computer comp2("Intel Core i5", 8, 500);
	Computer comp3(comp2);

	// Вывод информации о каждом объекте
	std::cout << "Computer 1:" << std::endl;
	comp1.show();
	std::cout << "Computer 2:" << std::endl;
	comp2.show();
	std::cout << "Computer 3:" << std::endl;
	comp3.show();

	// Изменение оперативной памяти у объекта comp1 и вывод измененной информации
	comp1.setram(4);
	std::cout << "Computer 1 after RAM change:" << std::endl;
	comp1.show();

	return 0;
}