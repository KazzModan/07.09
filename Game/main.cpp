#include "Game.h"

int main()
{
	MilitaryBarrack militaryBarrack;
	ScientificBarrack scientificBarrack;
	MedicalBarrack medicalBarrack;

	Unit* marine = militaryBarrack.create();
	Unit* crazyScientist = scientificBarrack.create();
	Unit* doctor = medicalBarrack.create();

	marine->play();
	crazyScientist->play();
	doctor->play();

	return 0;
}