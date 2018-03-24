/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the prototypes for the Armory
** class. This class inherits from Space.
*********************************************************************/
#ifndef ARMORY_HPP
#define ARMORY_HPP
#include "Space.hpp"

class Armory : public Space
{
	public:
		virtual void writeIntro();
		virtual void startEvent();
		virtual Space* chooseDestination();
};

#endif 