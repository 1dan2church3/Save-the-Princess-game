/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the function definitions for the
** dragon class. This class inherits from monster.
*********************************************************************/
#include "Firelord.hpp"

Firelord::Firelord()
{
	health = 100;
	attack = 20;
	name = "Fiery the firelord";
}

//When monster dies
void Firelord::deathOutro()
{
	std::cout << "Fiery the firelord begins to crack and crumble and bursts into a cloud of ash. You did it!" << std::endl;
	std::cout << "You find Fiery's Magma Staff and 75 gold under his ashes." << std::endl;
}
