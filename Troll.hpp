/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the prototypes for the Troll
** class. This class inherits from Monster.
*********************************************************************/
#ifndef TROLL_HPP
#define TROLL_HPP
#include "Monster.hpp"

class Troll : public Monster
{
public:
	Troll();
	virtual void deathOutro();
};

#endif 
