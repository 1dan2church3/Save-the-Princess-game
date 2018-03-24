/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the function definitions for the
** cave class. This class inherits from Space. 
*********************************************************************/
#include "Cave.hpp"

//Display intro
void Cave::writeIntro()
{
	std::cout << "Thump!! Thump!! Thump!! You hear loud footsteps, and suddenly a giant dragon appears..." << std::endl;
	std::cout << "The dragon shakes its head and breathes fire all around!" << std::endl;
}

//Start fight
void Cave::startEvent()
{
	if (!defeated)
	{
		writeIntro();
		doBattle();
		//If player won, add object and gold to inventory
		if (this->character->getHealth() > 0)
		{
			this->character->addItem("Dragonscale Armor");
			this->character->addGold(50);
			defeated = true;
		}
	}
	//If player has already beaten this zone, display special message
	else
	{
		std::cout << "This is now a peaceful cave." << std::endl;
	}
}

//Ask player where to now
Space* Cave::chooseDestination()
{
	std::cout << "You are currently in the cave" << std::endl;
	std::cout << "Where would you like to go from here?" << std::endl;
	std::cout << "1: West to the armory" << std::endl;

	int menuChoice = validateInput(1, 1);

	switch (menuChoice)
	{
	case 1:
		return this->left;
		break;
	}
}