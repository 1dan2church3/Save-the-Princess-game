/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the function definitions for the
** lava class. This class inherits from space.
*********************************************************************/
#include "Lava.hpp"

//Display intro when entering zone
void Lava::writeIntro()
{
	std::cout << "The heat from the lava is almost unbearable. Without your dragonscale armor, you surely would be toast." << std::endl;
	std::cout << "In the distance you see the firelord. He is more massive than you expected. You are in for a battle..." << std::endl;
}

//Start combat
void Lava::startEvent()
{
	if (!defeated)
	{
		writeIntro();
		doBattle();
		if (this->character->getHealth() > 0)
		{
			//Add object and gold to inventory when monster dies
			this->character->addItem("Magma staff");
			this->character->addGold(75);
			defeated = true;
		}
	}
	//If zone has been defeated already
	else
	{
		std::cout << "This is now a peaceful lava field." << std::endl;
	}
}

//Ask player where they want to go
Space* Lava::chooseDestination()
{
	std::cout << "You are currently in the lava field." << std::endl;
	std::cout << "Where would you like to go from here?" << std::endl;
	std::cout << "1: East to the armory" << std::endl;
	

	int menuChoice = validateInput(1, 1);

	switch (menuChoice)
	{
	case 1:
		return this->right;
		break;
	}
}