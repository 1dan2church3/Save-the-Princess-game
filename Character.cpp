/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the function definitions for the
** character class. This is the main character of the game.
*********************************************************************/
#include "Character.hpp"

Character::Character ()
{
	health = 100;
	gold = 100;
	attack = 20;
	armor = 0;
	movesLeft = 12;
	hasCanteen = false;
	hasClub = false;
	hasScales = false;
	hasStaff = false;
}

//Add item to inventory
void Character::addItem(std::string itemIn)
{
	if (list.size() <= 4)
	{
		list.push_front(itemIn);
	}

	else
	{
		std::cout << "Your backpack is full" << std::endl;
	}
}

//Remove item from inventory
void Character::removeItem(std::string itemOut)
{
	list.remove(itemOut);
}

//Print all items in inventory
void Character::printList()
{
	std::list<std::string>::iterator iterBegin = list.begin();
	std::list<std::string>::iterator iterEnd = list.end();

	while (iterBegin != iterEnd)
	{
		std::cout << *iterBegin << std::endl;
		iterBegin++;
	}
}

//Add or subtract gold 
void Character::addGold(int goldIn)
{
	gold += goldIn;
}

//If player buys an upgrade to weapon
void Character::upgradeAttack()
{
	attack += 5;
}

//If player buys an upgrade to armor
void Character::upgradeArmor()
{
	armor += 5;
}

//When player kills swamplord
void Character::setCanteen(bool boolIn)
{
	hasCanteen = boolIn;
}

//When player kills troll
void Character::setClub(bool boolIn)
{
	hasClub = boolIn;
}

//When player kills the dragon
void Character::setScales(bool boolIn)
{
	hasScales = boolIn;
}

//When player kills the firelord
void Character::setStaff(bool boolIn)
{
	hasStaff = boolIn;
}

//Adjust player health
void Character::setHealth(int healthIn)
{
	health += healthIn;
}

//Reset health after game is over
void Character::restoreHealth()
{
	health = 100;
}

//Reset gold after game is over
void Character::restoreGold()
{
	gold = 100;
}

//Clear all items in inventory
void Character::clearList()
{
	list.clear();
}

//Reset number of moves when game is over
void Character::restoreMoves()
{
	movesLeft = 10;
}

//All the getters and setters for the class
int Character::getMoves()
{
	return movesLeft;
}

void Character::setMoves()
{
	movesLeft--;
}

bool Character::getClub()
{
	return hasClub;
}

bool Character::getStaff()
{
	return hasStaff;
}

bool Character::getScales()
{
	return hasScales;
}

bool Character::getCanteen()
{
	return hasCanteen;
}

int Character::getAttack()
{
	return attack;
}

int Character::getArmor()
{
	return armor;
}

int Character::getGold()
{
	return gold;
}

std::string Character::getName()
{
	return name;
}

int Character::getHealth()
{
	return health;
}

void Character::setName(std::string nameIn)
{
	name = nameIn;
}