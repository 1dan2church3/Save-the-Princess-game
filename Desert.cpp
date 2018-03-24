/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the function definitions for the
** Desert class. This class inherits from the space class. This
** is simply a gateway space to the castle.
*********************************************************************/
#include "Desert.hpp"

//Display intro when entering space
void Desert::writeIntro()
{
	std::cout << "After days of walking through the hot desert, you are growing tired and your whole body aches." << std::endl;
	std::cout << "Knowing you have many days travel left to reach the castle, you sure are glad you have" << std::endl;
	std::cout << "endless water canteen with you." << std::endl;
}

void Desert::startEvent()
{
	writeIntro();
}

//Ask player where they want to go
Space* Desert::chooseDestination()
{
	std::cout << "You are currently in the desert." << std::endl;
	std::cout << "Where would you like to go from here?" << std::endl;
	std::cout << "1: North to the swamp lands" << std::endl;
	std::cout << "2: South to the castle" << std::endl;

	int menuChoice = validateInput(1, 2);

	switch (menuChoice)
	{
	case 1:
		return this->up;
		break;
	case 2:
		return this->down;
		break;
	}
}