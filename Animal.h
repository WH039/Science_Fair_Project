#pragma once


#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <ctime>

using namespace std;

namespace ANIMAL {
	class Animal {
	private:
		int totalPopulation;
		double survivalChance;
		int stamina;
		string primaryAttribute;
		string secondaryAttribute;
		string previousTask;

	public:
		Animal();

		void setTotalPopulation(int);
		void setAttribute(string);
		void setNewAttribute(int);
		void setTask(string);

		void addSurvivalChance(double);
		void useStamina(int);

		void displayAllInfo();
		int getTotalPopulation();
		double getSurvivalChance();
		int getStamina();
		string getAttribute(int);
		string getTask();
	};
}