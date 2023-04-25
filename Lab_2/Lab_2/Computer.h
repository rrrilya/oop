#pragma once
#include <string>

class Computer
{
public:
	std::string processor;
	int ram;
	int hdd;
	Computer();
	Computer(std::string processor, int ram, int hdd);
	Computer(const Computer& obj);
	~Computer();
	int getram();
	void setram(int ram);
	int gethdd();
	void sethdd(int hdd);
	void show();
private:
	double price;
}