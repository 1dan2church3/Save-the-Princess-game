/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the prototypes for the Warlock
** class. This class inherits from Monster.
*********************************************************************/
#ifndef WARLOCK_HPP
#define WARLOCL_HPP
#include "Monster.hpp"

class Warlock : public Monster
{
public:
	Warlock();
	virtual void deathOutro();
};

#endif 
