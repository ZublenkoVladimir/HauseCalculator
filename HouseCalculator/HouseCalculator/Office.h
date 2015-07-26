#pragma once
#include "Building.h"
#include "officeHouse.h"

class Office :
	public Building, public officeHouse
{
public:
	Office(double length, double width, double floorHeight);
	~Office();
	void RoofCalc(int numOfType);
	void Total();
};

