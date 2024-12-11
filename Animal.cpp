#include "Animal.h"

using namespace ANIMAL;

Animal::Animal()
{
	survivalChance = 0;
	stamina = 60;
	previousTask = "none";
}

void Animal::setTotalPopulation(int tp)
{
	totalPopulation = tp;
}

void Animal::setAttribute(string a)
{
	primaryAttribute = a;
	
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

void ANIMAL::Animal::setNewAttribute(int a)
{
	if (secondaryAttribute == "longbeak" || secondaryAttribute == "shortbeak" || secondaryAttribute == "longlegs" || secondaryAttribute == "smallbody")
	{
		secondaryAttribute = secondaryAttribute;
	}
	else {

		if (primaryAttribute == "longbeak") {
			if (a == 1) {
				secondaryAttribute = "longlegs";
			}
			else if (a == 0) {
				secondaryAttribute = "smallbody";
			}
		}
		if (primaryAttribute == "shortbeak") {
			if (a == 1) {
				secondaryAttribute = "longlegs";
			}
			else if (a == 0) {
				secondaryAttribute = "smallbody";
			}
		}
		if (primaryAttribute == "longlegs") {
			if (a == 1) {
				secondaryAttribute = "longbeak";
			}
			else if (a == 0) {
				secondaryAttribute = "shortbeak";
			}
		}
		if (primaryAttribute == "smallbody") {
			if (a == 1) {
				secondaryAttribute = "longbeak";
			}
			else if (a == 0) {
				secondaryAttribute = "shortbeak";
			}
		}
	}
	
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

string Animal::getAttribute(int n)
{
	if (n == 1) {
		return primaryAttribute;
	}
	else if (n == 2) {
		return secondaryAttribute;
	}
}

string Animal::getTask()
{
	return previousTask;
}
