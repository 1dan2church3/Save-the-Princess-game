/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the prototypes for the Castle
** class. This class inherits from Space.
*********************************************************************/
#ifndef CASTLE_HPP
#define CASTLE_HPP
#include "Space.hpp"

class Castle : public Space
{
	public:
		virtual void writeIntro();
		virtual void startEvent();
		virtual Space* chooseDestination();
};

#endif 