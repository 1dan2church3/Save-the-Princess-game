/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the prototypes for the SWAMP
** class. This class inherits from Space.
*********************************************************************/
#ifndef SWAMP_HPP
#define SWAMP_HPP
#include "Space.hpp"

class Swamp : public Space
{
	public:
		virtual void writeIntro();
		virtual void startEvent();
		virtual Space* chooseDestination();
};

#endif 
