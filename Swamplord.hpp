/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the prototypes for the Swamplord
** class. This class inherits from Monster.
*********************************************************************/
#ifndef SWAMPLORD_HPP
#define SWAMPLORD_HPP
#include "Monster.hpp"

class Swamplord : public Monster
{
public:
	Swamplord();
	virtual void deathOutro();
};

#endif 
