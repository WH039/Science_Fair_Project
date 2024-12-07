#include "Animal.h"

using namespace ANIMAL;

Animal::Animal()
{
	survivalChance = 0;
	stamina = 100;
	previousTask = "none";
}

void Animal::setTotalPopulation(int tp)
{
	totalPopulation = tp;
}

void Animal::setAttribute(string a)
{
	attributes = a;
	
	/*
	srand(time(0));

	int randomNumber = rand() % 100 + 1;

	if (randomNumber < 100 && randomNumber > 0) {
		if (randomNumber <= 99 && randomNumber > 66) {
			attributes = "attribute 1";
		}
		else if (randomNumber <= 66 && randomNumber > 33) {
			attributes = "attribute 2";
		}
		else if (randomNumber <= 33 && randomNumber > 0) {
			attributes = "attribute 3";
		}

	}
	*/
}

void Animal::addSurvivalChance(int chance)
{
	survivalChance += chance;
}

void Animal::setTask(string t)
{
	previousTask = t;
}

void Animal::useStamina(int amount)
{
	stamina -= amount;
}

void Animal::displayAllInfo()
{
}

int Animal::getTotalPopulation()
{
	return totalPopulation;
}

int Animal::getSurvivalChance()
{
	return survivalChance;
}

int ANIMAL::Animal::getStamina()
{
	return stamina;
}

string Animal::getAttribute()
{
	return attributes;
}

string Animal::getTask()
{
	return previousTask;
}
