/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the prototypes for the Desert
** class. This class inherits from Space.
*********************************************************************/
#ifndef DESERT_HPP
#define DESERT_HPP
#include "Space.hpp"

class Desert : public Space
{
	public:
		virtual void writeIntro();
		virtual void startEvent();
		virtual Space* chooseDestination();
};

#endif 
