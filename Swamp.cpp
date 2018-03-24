/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the function definitions for the
** swamp class. This class inherits from space.
*********************************************************************/
#include "Swamp.hpp"

//Display message when entering zone
void Swamp::writeIntro()
{
	std::cout << "You begin to smell a terrible stench as you are wading through the waist high swamps." << std::endl;
	std::cout << "Suddenly a swamp lord rises up out of the muddy waters!" << std::endl;
}

//Start combat
void Swamp::startEvent()
{
	if (!defeated)
	{
		writeIntro();
		doBattle();
		if (this->character->getHealth() > 0)
		{
			//Add item and gold to inventory
			this->character->addItem("Endless Water Canteen");
			this->character->addGold(100);
			defeated = true;
		}
	}
	//If zone is already beaten
	else
	{
		std::cout << "This is now a peaceful swamp" << std::endl;
	}
}

//Ask player where to next
Space* Swamp::chooseDestination()
{
	std::cout << "You are currently in the swamp." << std::endl;
	std::cout << "Where would you like to go from here?" << std::endl;
	std::cout << "1: North to the armory" << std::endl;
	std::cout << "2: South to the desert and through to the castle" << std::endl;

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