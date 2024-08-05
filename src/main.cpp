#include "Car.h"
#include <iostream>
#include <string>

int main () 
{
	std::string maker;
	std::string model;
	int year;
	int numberOfDoors;
	bool sunRoof;

	std::cout << "Enter the car's manufacturer" << std::endl;
	std::getline(std::cin, maker);
	std::cout << "Enter the car's model" << std::endl;
	std::getline(std::cin, model);
	std::cout << "Enter the car's year of manufacturing" << std::endl;
	std::cin >> year;
	std::cout << "Enter the number of doors" << std::endl;
	std::cin >> numberOfDoors;
	std::cout << "Does it have a sunroof?" << std::endl;
	std::cin >> sunRoof;

	Car object(maker, model, year, numberOfDoors, sunRoof);

	object.display();
}