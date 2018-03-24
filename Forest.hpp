/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the prototypes for the Forest
** class. This class inherits from Space.
*********************************************************************/
#ifndef FOREST_HPP
#define FOREST_HPP
#include "Space.hpp"

class Forest : public Space
{
	public:
		virtual void writeIntro();
		virtual void startEvent();
		virtual Space* chooseDestination();
};

#endif 