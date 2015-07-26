#pragma once
#include "Building.h"
#include "officeHouse.h"

class House :
	public Building, public officeHouse
{
public:
	House(double length, double width, double floorHeight);
	~House();
	void RoofCalc(int numOfType);
	void Total();
};

