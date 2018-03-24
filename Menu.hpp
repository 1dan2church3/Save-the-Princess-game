/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the prototypes for the Menu
** class.
*********************************************************************/
#ifndef MENU_HPP
#define MENU_HPP
#include "Space.hpp"

class Menu {

	private:
		Space *currLocation = nullptr;
	
	public:
		void showMenu();
		int validateInput(int, int);
};

#endif // !MENU_HPP

