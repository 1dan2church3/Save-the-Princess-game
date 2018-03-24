/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the prototypes for the Monster
** class. This is an abstract class on which all the monster classes
** are based off of.
*********************************************************************/
#ifndef MONSTER_HPP
#define MONSTER_HPP
#include <iostream>

class Monster
{
protected:
	int health;
	int attack;
	std::string name;

public:
	virtual void deathOutro() = 0;
	int getAttack();
	std::string getName();
	int getHealth();
	void setHealth(int);
	void restoreHealth();
};

#endif // !MONSTER_HPP

