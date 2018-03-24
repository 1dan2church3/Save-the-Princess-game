/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the function definitions
** for the Armory class. This class inherits from Space. The armory
** is the "base" for the player. They can upgrade their weapon and 
** armor here and check their inventory. The armory class contains the
** writeIntro, startEvent, and choosDestination functions.
*********************************************************************/
#include "Armory.hpp"
#include "Character.hpp"
#include <iomanip>

//Displays a message about the space 
void Armory::writeIntro()
{
	std::cout << "Welcome to the armory, sir " << this->character->getName() << ". We have plenty of new wares in store!" << std::endl;
	std::cout << "What would you like to buy?" << std::endl;
}

/*Displays the intro when the player moves to the space. It then 
provides the player with options.*/
void Armory::startEvent()
{
	writeIntro();
	int menuChoice;
	
	do{
		std::cout << "You have " << this->character->getGold() << " gold." << std::endl << std::endl;
		std::cout << "1: Buy an upgrade for your sword - 100 gold"<< std::endl;
		std::cout << "2: Buy an upgrade for you armor - 75 gold" << std::endl;
		std::cout << "3: Show items in your backpack" << std::endl;
		std::cout << "4: Go on a quest" << std::endl;
		menuChoice = validateInput(1, 4);

		switch (menuChoice)
		{
		case 1:
			if (this->character->getGold() >= 100)
			{
				this->character->upgradeAttack();
				this->character->addGold(-100);
				std::cout << "Sword upgraded! You now do 5 extra damage per attack for a total of " << this->character->getAttack() << " damage per attack." << std::endl;
			}

			else
			{
				std::cout << "Sorry, you don't have enough gold for that." << std::endl;
			}
			break;
		case 2:
			if (this->character->getGold() >= 75)
			{
				this->character->upgradeArmor();
				this->character->addGold(-75);
				std::cout << "Armor upgraded! You now have 5 more armor for a total of " << this->character->getArmor() << std::endl;
			}

			else
			{
				std::cout << "Sorry, you don't have enough gold for that." << std::endl;
			}
			break;
		case 3:
			std::cout << "Here are the items in your backpack: " << std::endl;
			this->character->printList();
			break;
		case 4:
			break;
		}
	} while (menuChoice != 4);
}

/*This function moves the player to the chosen space. */
Space* Armory::chooseDestination()
{
	//Display moves left, and options where the player can go
	std::cout << "You have " << character->getMoves() << " days left to rescue the princess." << std::endl;
	std::cout << "You are currently at the armory." << std::endl;
	std::cout << "Where would you like to go from here?" << std::endl;
	std::cout << "1: North to the forest" << std::endl;
	std::cout << "2: East to the cave" << std::endl;
	std::cout << "3: West to the lava lands" << std::endl;
	std::cout << "4: South to the swamps" << std::endl;

	int menuChoice = validateInput(1, 4);

	switch (menuChoice)
	{
	case 1:
		//Set hasClub to true so player can move to next zone if they survive
		this->character->setClub(true);
		return this->up;
		break;
	case 2:
		//If player has club, allow player to enter zone 
		if (this->character->getClub())
		{
			//Set hasScales to true so player can enter next zone if they survive
			this->character->setScales(true);
			return this->right;
		}

		else
		{
			//If player tries to enter zone without club, display message
			std::cout << "As you mention you are on your way to the cave, the blacksmith informs you there are \ngiant boulders blocking the entrance.";
			std::cout << "He tells you of a troll in the forest who carries a magical club that \nshould be able to break the boulders." << std::endl;
			std::cout << "You decide to browse the wares in the\n armory a while longer before setting out." << std::endl;
			return this;
		}
		break;
	case 3:
		//If player has scales object, allow player to enter zone
		if (this->character->getScales())
		{
			//Set player hasStaff to true, so player can enter next zone
			this->character->setStaff(true);
			return this->left;
		}

		//If player doesn't have scales, display message
		else
		{
			std::cout << "Another patron happens to overhear your plans of heading to lava lands." << std::endl;
			std::cout << "He tells you the heat is unbearable, but there lives a dragon in the nearby cave." << std::endl;
			std::cout << "Surely a suit of armor made from it's scales should shield you from the heat." << std::endl;
			std::cout << "You decide to ponder a while longer in the armory on how to defeat this dragon." << std::endl;
			return this;
		}
		break;
	case 4:
		//If player has staff, allow player to enter zone
		if (this->character->getStaff())
		{
			//Set hasCanteen to true so player can enter desert zone
			this->character->setCanteen(true);
			return this->down;
		}

		else
		{
			//Otherwise display message
			std::cout << "You run into an old wise man on your way to the swamp." << std::endl;
			std::cout << "He tells you no man has survived an encounter with Quagmire The Swamplord. " << std::endl;
			std::cout << "The old man then tells you about a firelord in the lava lands who carries a magma staff." << std::endl;
			std::cout << "That should surely do the trick, he says." << std::endl;
			std::cout << "You decide to head back to the armory to rethink your plan." << std::endl;
			return this;
		}
		break;
	}
}
