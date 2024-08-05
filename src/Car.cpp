#include "Car.h"
#include <iostream>

Car::Car(std::string& m, std::string mod, int year, int d, bool s) :
	Vehicle(m, mod, year),
	numberOfDoors(d),
	hasSunroof(s)
{}

void Car::setNumberOfDoors(int d) 
{
	numberOfDoors = d;
}

void Car::setHasSunroof(bool s) 
{
	hasSunroof = s;
}

int Car::getNumberOfDoors() const
{
	return numberOfDoors;
}

bool Car::getHasSunroof() const 
{
	return hasSunroof;
}

void Car::display() const 
{
	Vehicle::display();
	std::cout << "Number of doors: " << numberOfDoors << std::endl;
	std::cout << "Sunroof: " << hasSunroof << std::endl;
}