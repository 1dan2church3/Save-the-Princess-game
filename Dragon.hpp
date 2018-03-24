/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the prototypes for the Dragon
** class. This class inherits from Monster.
*********************************************************************/
#ifndef DRAGON_HPP
#define DRAGON_HPP
#include "Monster.hpp"

class Dragon : public Monster
{
public:
	Dragon();
	virtual void deathOutro();
};
#endif 