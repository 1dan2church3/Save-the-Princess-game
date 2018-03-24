/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the prototypes for the Cave
** class. This class inherits from Space.
*********************************************************************/
#ifndef CAVE_HPP
#define CAVE_HPP
#include "Space.hpp"

class Cave : public Space
{
	private:
		bool isDead = false;
	public:
		virtual void writeIntro();
		virtual void startEvent();
		virtual Space* chooseDestination();
};

#endif 
