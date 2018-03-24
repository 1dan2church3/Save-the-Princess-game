/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the function definitions for the
** swamplord class. This class inherits from monster.
*********************************************************************/
#include "Swamplord.hpp"

Swamplord::Swamplord()
{
	health = 100;
	attack = 25;
	name = "Stinky the Swamplord";
}

//When monster dies
void Swamplord::deathOutro()
{
	 std::cout << "Stinky the Swamplord evaporates into thin air after you blast him with your Magma staff." << std::endl;
	 std::cout << "He leaves behind an Endless Water Canteen and 100 gold." << std::endl;
}
