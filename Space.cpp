/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the function definitions for the
** space class. This class is an abstract class on which all of the 
** spaces inherit from. 
*********************************************************************/
#include "Space.hpp"
#include <limits>

Space::Space()
{
	up = nullptr;
	right = nullptr;
	down = nullptr;
	left = nullptr;
	defeated = false;
}

//Getters and setters
bool Space::getDefeated()
{
	return defeated;
}

void Space::setDefeated()
{
	defeated = false;
}

Space* Space::getUp()
{
	return up;
}

Space* Space::getRight()
{
	return right;
}

Space* Space::getDown()
{
	return down;
}

Space* Space::getLeft()
{
	return left;
}

void Space::setUp(Space* upIn)
{
	up = upIn;
}

void Space::setRight(Space* rightIn)
{
	right = rightIn;
}

void Space::setDown(Space* downIn)
{
	down = downIn;
}

void Space::setLeft(Space* leftIn)
{
	left = leftIn;
}

void Space::setMonster(Monster* monsterIn)
{
	monster = monsterIn;
}

void Space::setCharacter(Character* charIn)
{
	character = charIn;
}

/*validateInput takes two int paramaters and verifies the input given
is between these values and not a string or other unwanted data*/
int Space::validateInput(int low, int high)
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

/*This function is responsible for handling all of the combat in each zone.
The monster attacks first, then the play attacks if he is not dead. If the
player kills the monster, a message is displayed from the dying monster.*/
void Space::doBattle()
{
	std::cout << std::endl;
	//While both player and monster are alive, continue fighting
	while (this->monster->getHealth() > 0 && this->character->getHealth() > 0)
	{
		//Monster attacks player
		std::cout << this->monster->getName() << " attacks you for " << (this->monster->getAttack() - this->character->getArmor()) << " damage." << std::endl;
		this->character->setHealth(-(this->monster->getAttack() - this->character->getArmor()));
		std::cout << "You now have " << this->character->getHealth() << " health." << std::endl;

		//If player is still alive, player attacks monster
		if (this->character->getHealth() > 0)
		{
			std::cout << "You attack " << this->monster->getName() << " for " << this->character->getAttack() << " damage." << std::endl;
			this->monster->setHealth(-this->character->getAttack());
			std::cout << this->monster->getName() << " now has " << this->monster->getHealth() << " health." << std::endl;
		}
	}
	std::cout << std::endl;

	//If monster dies
	if (this->monster->getHealth() <= 0)
	{
		this->monster->deathOutro();
	}
	std::cout << std::endl;
}



