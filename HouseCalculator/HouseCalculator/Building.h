#pragma once
#include "enumerations.h"

class Building abstract
{
public:
	Building(double length, double width, double floorHeight);
	virtual ~Building();
	void WallCalc(int numOfType);
	void FoudCalc(int numOfType);
	void OverlapCalc(int numOfType);
	virtual void RoofCalc(int numOfType) = 0;
protected:
	double length, width, floorHeight;
	double founfCOST, wallCOST, overlapCOST, roofCOST, FinalCOST;
	wall typeWall;
	foundation typeFound;
	roof typeRoof;
	overlap typeOverlap;

};

