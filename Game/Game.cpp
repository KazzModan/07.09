#include "Game.h"

Unit::Unit()
{
	this->health = 0;
	this->damage = 0;
}

Marine::Marine()
{
	this->health = 20;
	this->damage = 50;
}

void Marine::play()
{
	cout << "Marine make piv piv\n";
}

�razyScientist::�razyScientist()
{
	this->health = 10;
	this->damage = 100;
}

void �razyScientist::play()
{
	cout << "Crazy Scientist make babah\n";
}

Doctor::Doctor()
{
	this->health = 100;
	this->damage = 10;
}

void Doctor::play()
{
	cout << "Doctor treats others\n";
}

Unit* MilitaryBarrack::create()
{
	return new Marine;
}

Unit* ScientificBarrack::create()
{
	return new �razyScientist;
}

Unit* MedicalBarrack::create()
{
	return new Doctor;
}
