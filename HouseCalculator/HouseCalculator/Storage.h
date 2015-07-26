#pragma once
#include "Building.h"
#include "StorageGarage.h"

class Storage :
	public Building, public StorageGarage
{
public:
	Storage(double length, double width, double floorHeight);
	~Storage();
	void RoofCalc();
	void Total();
};

