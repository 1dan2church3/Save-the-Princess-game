/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the function definitions for the
** troll class. This class inherits from monster.
*********************************************************************/
#include "Troll.hpp"

Troll::Troll()
{
	health = 100;
	attack = 10;
	name = "Grom Grom the Troll";
}

//When troll dies
void Troll::deathOutro()
{
	std::cout << "OWWW... ME NOT FEEL SO GOOD..." << std::endl;
	std::cout << "The troll falls over and drops his giant magical club and 25 gold." << std::endl;
}