#pragma once
#include "Computer.h"
#include <iostream>

// ����������� ��� ����������
Computer::Computer()
{
	processor = "";
	this->ram = 0;
	this->hdd = 0;
}
// ����������� � �����������
Computer::Computer(std::string processor, int ram, int hdd)
{
	this->processor = processor;
	this->ram = ram;
	this->hdd = hdd;
}
// ����������� �����������
Computer::Computer(const Computer& obj)
{
	this->processor = obj.processor;
	this->ram = obj.ram;
	this->hdd = obj.hdd;
}
// ����������
Computer::~Computer()
{
	std::cout << "�������� �������: " << this << std::endl;
}
// ������ ����������� ������
int Computer::getram()
{
	return ram;
}
// ������ ����������� ������
void Computer::setram(int ram)
{
	this->ram = ram;
}
// ������ ������ �������� �����
int Computer::gethdd()
{
	return hdd;
}
// ������ ������ �������� �����
void Computer::sethdd(int hdd)
{
	this->hdd = hdd;
}
// ����� ��������� ��������� ������� ������ Computer
void Computer::show()
{
	std::cout << "Processor: " << processor << std::endl << "RAM: " << ram << std::endl << "HDD: " << hdd << std::endl;
}