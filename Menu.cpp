/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the function definitions for the
** Menu class. There are two functions - showMenu and validateInput.
*********************************************************************/
#include "Menu.hpp"
#include <limits>
#include <string>
#include "Armory.hpp"
#include "Castle.hpp"
#include "Cave.hpp"
#include "Character.hpp"
#include "Desert.hpp"
#include "Dragon.hpp"
#include "Firelord.hpp"
#include "Forest.hpp"
#include "Lava.hpp"
#include "Monster.hpp"
#include "Space.hpp"
#include "Swamp.hpp"
#include "Swamplord.hpp"
#include "Troll.hpp"
#include "Warlock.hpp"

/*showMenu is the main function of the program, which displays the menu,
and the sequence of the game. It creates all of the objects of the game,
and links them together. It then displays menu options to start or quit
the game. It then runs the game until the player is dead, there are no
more moves left, or the player has won the game. It then asks if the 
player would like to play again, or quit.*/
void Menu::showMenu()
{
	int menuChoice;
	std::string name;
	Character *character = new Character;
	Forest *forest = new Forest;
	Armory *armory = new Armory;
	Castle *castle = new Castle;
	Cave *cave = new Cave;
	Desert *desert = new Desert;
	Swamp *swamp = new Swamp;
	Lava *lava = new Lava;
	Firelord *firelord = new Firelord;
	Dragon* dragon = new Dragon;
	Warlock* warlock = new Warlock;
	Swamplord* swamplord = new Swamplord;
	Troll* troll = new Troll;

	//Link forest
	forest->setDown(armory);
	forest->setMonster(troll);
	forest->setCharacter(character);

	//Link armory
	armory->setUp(forest);
	armory->setDown(swamp);
	armory->setLeft(lava);
	armory->setRight(cave);
	armory->setCharacter(character);

	//Link lava
	lava->setRight(armory);
	lava->setMonster(firelord);
	lava->setCharacter(character);

	//Link cave
	cave->setLeft(armory);
	cave->setMonster(dragon);
	cave->setCharacter(character);

	//Link swamp
	swamp->setUp(armory);
	swamp->setDown(desert);
	swamp->setMonster(swamplord);
	swamp->setCharacter(character);
	
	//Link desert
	desert->setUp(swamp);
	desert->setDown(castle);
	desert->setCharacter(character);
	
	//Link castle
	castle->setUp(desert);
	castle->setMonster(warlock);
	castle->setCharacter(character);

	do
	{
		std::cout << "-----Save the Princess! - An Adventure Game-----" << std::endl;
		std::cout << "1: Start Game" << std::endl;
		std::cout << "2: Exit" << std::endl;
		menuChoice = validateInput(1, 2);

		switch (menuChoice)
		{
		//Display game instructions
		case 1:
			std::cout << "You have been chosen by the king to rescue his daughter, the princess, from an" << std::endl; 
			std::cout << "evil warlock. The warlock is holding her captive in his castle." << std::endl;
			std::cout << "In order to save her, you must first defeat a series of creatures which hold" << std::endl;
			std::cout << "items you will need in order to enter the castle." << std::endl << std::endl;
			std::cout << "What do you want your knight to be named?" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::getline(std::cin, name);
			character->setName(name);
			std::cout << "Greetings sir " << character->getName() << "!" << std::endl;
			std::cout << "Let's first take a trip to the armory to upgrade your equipment." << std::endl << std::endl;
			currLocation = armory;

			//While we haven't won the game or still have moves left
			while (!castle->getDefeated() && character->getMoves() > 0 && character->getHealth() > 0) 
			{
				currLocation->startEvent();
				if (character->getHealth() > 0)
				{
					currLocation = currLocation->chooseDestination();
					character->restoreHealth();
					character->setMoves();
				}
			}

			//If player has died
			if (character->getHealth() <= 0)
			{
				std::cout << "You have died! Game over." << std::endl;
				break;
			}

			//If player ran out of moves
			else if (character->getMoves() <= 0 && !castle->getDefeated())
			{
				std::cout << "You spent too much time dillying around and now the warlock's love spell on the princess has taken effect." << std::endl;
				std::cout << "She's beyond rescue, nice job... Game over." << std::endl; 
			}

			//Reset game

			//Reset character
			character->restoreHealth();
			character->restoreGold();
			character->clearList();
			character->setCanteen(false);
			character->setClub(false);
			character->setScales(false);
			character->setStaff(false);
			character->restoreMoves();

			//Reset zones
			forest->setDefeated();
			castle->setDefeated();
			lava->setDefeated();
			swamp->setDefeated();
			cave->setDefeated();

			//Reset monsters
			dragon->restoreHealth();
			firelord->restoreHealth();
			swamplord->restoreHealth();
			warlock->restoreHealth();
			troll->restoreHealth();

		case 2:
			break;
		}
	} while (menuChoice != 2);

	//Free memory
	delete forest;
	delete armory;
	delete castle;
	delete cave;
	delete desert;
	delete swamp;
	delete lava;
	delete firelord;
	delete dragon;
	delete warlock;
	delete swamplord;
	delete troll;
	delete character;
}

/*validateInput takes two int paramaters and verifies the input given
is between these values and not a string or other unwanted data*/
int Menu::validateInput(int low, int high)
{
	int input;

	while (!(std::cin >> input) || (input < low) || (input > high) || std::cin.peek() != '\n')
	{
		std::cout << "Please enter a value between " << low << " and " << high << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return input;
}

