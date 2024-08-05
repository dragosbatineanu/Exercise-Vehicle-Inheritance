#pragma once

#include "Vehicle.h"

class Car : public Vehicle {

private:
	int numberOfDoors;
	bool hasSunroof;

public:
	Car(std::string& m, std::string mod, int year, int d, bool s);

	void setNumberOfDoors(int d);
	void setHasSunroof(bool s);

	int getNumberOfDoors() const;
	bool getHasSunroof() const;

	virtual void display() const override;
};

