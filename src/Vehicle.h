#pragma once

#include "Libraries.h"

class Vehicle 
{
protected:
	std::string maker;
	std::string model;

	int	year;

public:
	Vehicle(std::string& m, std::string& mod, int y);

	void setMaker(const std::string& m);
	void setModel(const std::string& mod);
	void setYear(int y);

	std::string getMake() const;
	std::string getModel()const;
	int getYear() const;

	virtual void display() const;
};