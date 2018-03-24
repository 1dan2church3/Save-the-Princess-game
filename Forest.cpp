/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the function definitions for the
** forest class. This class inherits from space.
*********************************************************************/
#include "Forest.hpp"

//Display intro when entering zone
void Forest::writeIntro()
{
	std::cout << "RAWRRRR!!!! I smell human in my forest! Me hungry for human meat..." << std::endl;
}

//Start combat
void Forest::startEvent()
{
	if (!defeated)
	{
		writeIntro();
		doBattle();
		if (this->character->getHealth() > 0)
		{
			//Add object and gold to inventory when troll dies
			this->character->addItem("Giant Magical Club");
			this->character->addGold(25);
			defeated = true;
		}
	}
	//If zone has already been defeated
	else
	{
		std::cout << "This is now a peaceful forest." << std::endl;
	}
}

//Ask user where they want to go
Space* Forest::chooseDestination()
{
	std::cout << "You are currently in the forest." << std::endl;
	std::cout << "Where would you like to go from here?" << std::endl;
	std::cout << "1: Go back to the armory" << std::endl;

	int menuChoice = validateInput(1, 1);

	switch (menuChoice)
	{
	case 1:
		return this->down;
		break;
	}
}