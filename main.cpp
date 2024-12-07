

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <ctime>
#include <vector>

#include "Animal.h"
#include "Game.h"

using namespace std;
using namespace ANIMAL;

int main() {

	srand(time(0));

	int randomNumber;
	int choice;
	int stage = 0;

	vector<Animal> finches;

	Animal finch1;
	randomNumber = rand() % 100 + 1;
	finch1.setTotalPopulation(randomNumber);
	finch1.setAttribute("longbeak");
	finches.push_back(finch1);

	Animal finch2;
	randomNumber = rand() % 100 + 1;
	finch2.setTotalPopulation(randomNumber);
	finch2.setAttribute("shortbeak");
	finches.push_back(finch2);
	
	Animal finch3;
	randomNumber = rand() % 100 + 1;
	finch3.setTotalPopulation(randomNumber);
	finch3.setAttribute("longlegs");
	finches.push_back(finch3);
	
	Animal finch4;
	randomNumber = rand() % 100 + 1;
	finch4.setTotalPopulation(randomNumber);
	finch4.setAttribute("smallbody");
	finches.push_back(finch4);

	displayGameRules();
	system("cls");

	cout << "Please choose an option:" << endl;
	cout << "                         (1) Display all animal information" << endl;
	cout << "                         (2) Assign a task to animal" << endl;
	cout << "                         " << endl;
	cout << "                         " << endl;
	cout << "                         (5) Force fragmentation (not advisable to do)" << endl;
	cout << "                         (-1) Exit game" << endl;
	cout << "Choice: ";
	cin >> choice;

	while (choice != -1) {

		if (choice == 1) {
			
			system("cls");
			
			for (int i = 0; i < finches.size(); i++) {
				cout << "--Finch " << i+1 << "--" << endl;
				cout << "Total Population: " << finches[i].getTotalPopulation() << endl;
				cout << "Attribute       : " << finches[i].getAttribute() << endl;
				cout << "Survival Chance : " << finches[i].getSurvivalChance() << "%" << endl;
				cout << "Task            : " << finches[i].getTask() << endl;
				cout << "Stamina         : " << finches[i].getStamina() << endl;
				cout << endl;
			}
			
			system("pause");

		}

		else if (choice == 2) {
			
			system("cls");

			int finchChoice;
			int taskChoice;
			
			cout << "Please choose a finch:" << endl;
			for (int i = 0; i < finches.size(); i++) {
				cout << "(" << i + 1 << ")" << " Finch " << i + 1 << endl;
			}
			cout << "Choice: ";
			cin >> finchChoice;

			system("cls");

			cout << "Please choose a task:" << endl;
			cout << "                      (1) gather food(worms)" << endl;
			cout << "                      (2) gather food(seeds)" << endl;
			cout << "                      (3) build nest" << endl;
			cout << "Choice: ";
			cin >> taskChoice;

			string attribute = finches[finchChoice].getAttribute();
			int chance;
			if (taskChoice == 1) {
				finches[finchChoice].setTask("gather food(worms)");
				if (attribute == "longbeak") {
					chance = 30;
					finches[finchChoice].useStamina(20);
					finches[finchChoice].addSurvivalChance(chance);
				}
				else if (attribute == "shortbeak") {
					chance = 10;
					finches[finchChoice].useStamina(20);
					finches[finchChoice].addSurvivalChance(chance);
				}
				else if (attribute == "longlegs") {
					chance = 15;
					finches[finchChoice].useStamina(20);
					finches[finchChoice].addSurvivalChance(chance);
				}
				else if (attribute == "smallbody") {
					chance = 15;
					finches[finchChoice].useStamina(20);
					finches[finchChoice].addSurvivalChance(chance);
				}
			}
			else if (taskChoice == 2) {
				finches[finchChoice].setTask("gather food(seeds)");
				if (attribute == "longbeak") {
					chance = 15;
					finches[finchChoice].useStamina(20);
					finches[finchChoice].addSurvivalChance(chance);
				}
				else if (attribute == "shortbeak") {
					chance = 30;
					finches[finchChoice].useStamina(20);
					finches[finchChoice].addSurvivalChance(chance);
				}
				else if (attribute == "longlegs") {
					chance = 15;
					finches[finchChoice].useStamina(20);
					finches[finchChoice].addSurvivalChance(chance);
				}
				else if (attribute == "smallbody") {
					chance = 20;
					finches[finchChoice].useStamina(20);
					finches[finchChoice].addSurvivalChance(chance);
				}
			}
			else if (taskChoice == 3) {
				finches[finchChoice].setTask("build nest");
				if (attribute == "longbeak") {
					chance = 15;
					finches[finchChoice].useStamina(20);
					finches[finchChoice].addSurvivalChance(chance);
				}
				else if (attribute == "shortbeak") {
					chance = 15;
					finches[finchChoice].useStamina(20);
					finches[finchChoice].addSurvivalChance(chance);
				}
				else if (attribute == "longlegs") {
					chance = 15;
					finches[finchChoice].useStamina(20);
					finches[finchChoice].addSurvivalChance(chance);
				}
				else if (attribute == "smallbody") {
					chance = 15;
					finches[finchChoice].useStamina(20);
					finches[finchChoice].addSurvivalChance(chance);
				}
			}

			system("pause");
		}

		else if (choice == 5) {
			stage += 1;
			for (int i = 0; i < finches.size(); i++) {
				int population = finches[i].getTotalPopulation();
				int next_population = population * finches[i].getSurvivalChance();
				finches[i].setTotalPopulation(next_population);
			}
		}
		
		else if (choice != 1 && choice != 2 && choice != 0){
			system("cls");
			cout << "Please make a choice present" << endl;
			choice = 0;
			system("pause");
		}

		if (finches[0].getTotalPopulation() <= 0 || finches[1].getTotalPopulation() <= 0 || finches[2].getTotalPopulation() <= 0 || finches[3].getTotalPopulation() <= 0) {
			system("cls");
			gameOverScreen();
			cout << "\nChoice: ";
			cin >> choice;
			if (choice == -1) {
				break;
			}
		}

		system("cls");
		cout << "Please choose an option:" << endl;
		cout << "                         (1) Display all animal information" << endl;
		cout << "                         (2) Assign a task to animal" << endl;
		cout << "                         " << endl;
		cout << "                         " << endl;
		cout << "                         (5) Force fragmentation (moves onto next stage)" << endl;
		cout << "                         (-1) Exit game" << endl;
		cout << "Choice: ";
		cin >> choice;

		
	}

	system("cls");
	cout << "Thanks for Playing" << endl;

}
