/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the prototypes for the Firelord
** class. This class inherits from Monster.
*********************************************************************/
#ifndef FIRELORD_HPP
#define FIRELORD_HPP
#include "Monster.hpp"

class Firelord : public Monster
{
public:
	Firelord();
	virtual void deathOutro();
};

#endif 

