/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the function definitions for the
** monster class. This class is an abstract class on which the other
** monsters inherit from.
*********************************************************************/
#include "Monster.hpp"

int Monster::getAttack()
{
	return attack;
}

int Monster::getHealth()
{
	return health;
}

std::string Monster::getName()
{
	return name;
}

void Monster::setHealth(int healthIn)
{
	health += healthIn;
}

void Monster::restoreHealth()
{
	health = 100;
}