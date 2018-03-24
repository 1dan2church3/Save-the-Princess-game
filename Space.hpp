/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the prototypes for the Space
** class. This is an abstract class on which all the spaces will 
** build off of.
*********************************************************************/
#ifndef SPACE_HPP
#define SPACE_HPP
#include <iostream>
#include "Monster.hpp"
#include "Character.hpp"

class Space 
{
	protected:
		Space *up;
		Space *right;
		Space *down;
		Space *left;
		Monster* monster;
		Character* character;
		bool defeated;
	
	public:
		Space();
		Space* getUp();
		Space* getRight();
		Space* getDown();
		Space* getLeft();
		void setUp(Space*);
		void setRight(Space*);
		void setDown(Space*);
		void setLeft(Space*);
		void setMonster(Monster*);
		virtual void writeIntro() = 0;
		virtual void startEvent() = 0;
		virtual Space* chooseDestination() = 0;
		int validateInput(int, int);	
		void setCharacter(Character*);
		void doBattle();
		bool getDefeated();
		void setDefeated();
};

#endif 

