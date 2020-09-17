#pragma once
#include <iostream>
using std::cout;

class Unit abstract 
{
public:
	Unit();
	virtual void play() = 0;

protected:
	size_t damage;
	size_t health;
};

class Marine : public Unit
{
public:
	Marine();
	void play() override;
};

class ÑrazyScientist : public Unit
{
public:
	ÑrazyScientist();
	void play() override;
};

class Doctor : public Unit
{
public:
	Doctor();
	void play() override;
};


class Barrack abstract
{
public:
	virtual Unit* create() = 0;
};

class MilitaryBarrack : Barrack
{
public:
	Unit* create() override;
};

class ScientificBarrack : Barrack
{
public:
	Unit* create() override;
};

class MedicalBarrack : Barrack
{
public:
	Unit* create() override;
};
