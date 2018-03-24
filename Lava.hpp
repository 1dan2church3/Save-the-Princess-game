/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the prototypes for the Lava
** class. This class inherits from Space.
*********************************************************************/
#ifndef LAVA_HPP
#define LAVA_HPP
#include "Space.hpp"

class Lava : public Space
{
	public:
		virtual void writeIntro();
		virtual void startEvent();
		virtual Space* chooseDestination();
};

#endif 
