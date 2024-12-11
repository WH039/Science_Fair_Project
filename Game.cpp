#include "Game.h"

string rollTheDice(int dice)
{
	if (dice == 1) {
		return "longbeak";
	}
	else if (dice == 2) {
		return "shortbeak";
	}
	else if (dice == 3) {
		return "longlegs";
	}
	else if (dice == 4) {
		return "smallbody";
	}
}

void displayGameRules()
{
	cout << "Welcome to Fragmentation Simulator" << endl;
	cout << endl;
	cout << "How to Play:" << endl;
	cout << "            The game will have 4 stages," << endl;
	cout << "            each stage will be seperated by a fragmentation event." << endl;
	cout << "            Each fragmentation event will kill off a percentage of your population" << endl;
	cout << "            Each population will have different attributes that help it complete tasks" << endl;
	cout << "            You can choose to perform tasks with a limit amount of stamina points" << endl;
	cout << "            Once you run out of stamina points on all of your population, the next stage will begin" << endl;
	cout << endl;
	cout << "            You win when by the 4th stage you hav atleast 4 members of a specific attribute population left" << endl;
	cout << "            (for reproductive purposes)" << endl;
	cout << endl;
	cout << "            Please do not open any other programs or use the computer outside of the demonstration window." << endl;

	system("pause");


}

void gameOverScreen()
{
	cout << "                          ==GAME OVER==                            " << endl;
	cout << "           One or more of your finch species has died off          " << endl;
	cout << " Please try to maintain a healthy population amount of 4 and above " << endl;
	cout << "                  Would you like to play again?                    " << endl;
	cout << "                         (0) Yes (-1) No                           " << endl;
}


