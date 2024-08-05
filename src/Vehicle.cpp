#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(std::string& m, std::string& mod, int y) 
	: 
	maker(m), 
	model(mod), 
	year (y) 
{}

void Vehicle::setMaker(const std::string& m) 
{
	maker = m;
}

void Vehicle::setModel(const std::string& mod) 
{
	model = mod;
}

void Vehicle::setYear(int y) 
{
	year = y;
}

std::string Vehicle::getMake() const 
{
	return maker;
}

std::string Vehicle::getModel() const 
{
	return model;
}

int Vehicle::getYear() const
{
	return year;
}

void Vehicle::display() const 
{
	std::cout << "Vehicle manufacturer: " << maker << std::endl;
	std::cout << "Vehicle model: " << model << std::endl;
	std::cout << "Vehicle year of manufacturing: " << year << std::endl;
}