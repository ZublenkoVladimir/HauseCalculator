#pragma once
#include "Building.h"
#include "StorageGarage.h"

class Garage :
	public Building, public StorageGarage
{
public:
	Garage(double length, double width, double floorHeight);
	~Garage();
	void RoofCalc();
	void Total();
};

