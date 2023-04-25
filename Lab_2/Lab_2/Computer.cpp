#pragma once
#include "Computer.h"
#include <iostream>

// Конструктор без параметров
Computer::Computer()
{
	processor = "";
	this->ram = 0;
	this->hdd = 0;
}
// Конструктор с параметрами
Computer::Computer(std::string processor, int ram, int hdd)
{
	this->processor = processor;
	this->ram = ram;
	this->hdd = hdd;
}
// Конструктор копирования
Computer::Computer(const Computer& obj)
{
	this->processor = obj.processor;
	this->ram = obj.ram;
	this->hdd = obj.hdd;
}
// Деструктор
Computer::~Computer()
{
	std::cout << "Удаление объекта: " << this << std::endl;
}
// Геттер оперативной памяти
int Computer::getram()
{
	return ram;
}
// Сеттер оперативной памяти
void Computer::setram(int ram)
{
	this->ram = ram;
}
// Геттер объема жесткого диска
int Computer::gethdd()
{
	return hdd;
}
// Сеттер объема жесткого диска
void Computer::sethdd(int hdd)
{
	this->hdd = hdd;
}
// Вывод локальных атрибутов объекта класса Computer
void Computer::show()
{
	std::cout << "Processor: " << processor << std::endl << "RAM: " << ram << std::endl << "HDD: " << hdd << std::endl;
}