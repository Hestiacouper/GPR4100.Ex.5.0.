#include "pch.h"
#include <iostream>
#include <time.h>
int main()
{
	char userChoice;
	char machineChoices[] = { 'R','P','C' };

	srand(static_cast<unsigned int>(time(0)));

	int turnCount = 0;
	int playerPoints = 0;
	int machinePoints = 0;

	std::cout << "Hi, welcome. Do you want to play? Y/N" << std::endl;
	std::cin >> userChoice;


	while (true) {
		if (userChoice == 'N') {
			break;
		}
		turnCount++;
		std::cout << "Choose between Rock (R), Paper (P), Scissors (S)" << std::endl;
		std::cin >> userChoice;
		int randomNb = rand() % 3;
		int machineThrow = machineChoices[randomNb];
		if (userChoice == machineThrow)
		{
			std::cout << "It's a tie! The player choose " << userChoice << " and the machine choose " << machineThrow << std::endl;
		}
		else if (userChoice == 'R' && machineThrow == 'P')
		{
			std::cout << "The machine won this turn! Paper win over rock! " << std::endl;
			machinePoints++;
		}
		else if (userChoice == 'R'&&machineThrow == 'S')
		{
			std::cout << "The player won this torn! Rock beats scissors!" << std::endl;
			playerPoints++;
		}
		else if (userChoice == 'P'&&machineThrow == 'S')
		{
			std::cout << "The machine won this turn! Scissors cuts paper!" << std::endl;
			machinePoints++;
		}
		else if (userChoice == 'P'&&machineThrow == 'R')
		{
			std::cout << "The player won this turn! Paper win over rock!" << std::endl;
			playerPoints++;
		}
		else if (userChoice == 'S'&&machineThrow == 'R')
		{
			std::cout << "The machine won this turn! Rock beats scissors!" << std::endl;
			machinePoints++;
		}
		else if (userChoice == 'S'&&machineThrow == 'P')
		{
			std::cout << "The player won this turn! Scissors cuts paper!" << std::endl;
			playerPoints++;
		}

		if (playerPoints + 2 == machinePoints)
		{
			std::cout << "The machine won the game in " << turnCount << " turns" << std::endl;
			std::cout << "Do you wish to play again? Y/N" << std::endl;
			std::cin >> userChoice;
			if(userChoice=='N')
			{
				break;
			}
			else if(userChoice=='Y')
			{
				turnCount = 0;
				playerPoints = 0;
				machinePoints = 0;
			}
		}
		else if (machinePoints + 2 == playerPoints)
		{
			std::cout << "The player won the game in " << turnCount << " turns" << std::endl;
			std::cout << "Do you wish to play again? Y/N" << std::endl;
			std::cin >> userChoice;
			if (userChoice == 'N')
			{
				break;
			}
			else if (userChoice == 'Y')
			{
				turnCount = 0;
				playerPoints = 0;
				machinePoints = 0;
			}
		}
		
	}

	system("pause");
	return EXIT_SUCCESS;
}

