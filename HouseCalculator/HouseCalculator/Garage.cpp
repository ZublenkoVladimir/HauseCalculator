#include "stdafx.h"
#include "Garage.h"


Garage::Garage(double length, double width, double floorHeight) :Building(length, width, floorHeight)
{
	this->typeRoof = flat;
}

Garage::~Garage()
{
}

void Garage::RoofCalc()
{

}

void Garage::Total()
{

}