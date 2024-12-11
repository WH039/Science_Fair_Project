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
		int survivalChance;
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

		void addSurvivalChance(int);
		void useStamina(int);

		void displayAllInfo();
		int getTotalPopulation();
		int getSurvivalChance();
		int getStamina();
		string getAttribute(int);
		string getTask();
	};
}