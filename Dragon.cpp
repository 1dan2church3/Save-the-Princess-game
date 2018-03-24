/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the function definitions for the
** dragon class. This class inherits from monster.
*********************************************************************/
#include "Dragon.hpp"

Dragon::Dragon()
{
	health = 100;
	attack = 15;
	name = "Puff the Dragon";
}

//When dragon dies
void Dragon::deathOutro()
{
	std::cout << "You leap on the dragon's back and cut off it's head with your sword!!" << std::endl; 
	std::cout << "That was a close one!" << std::endl;
	std::cout << "You cut some of the dragon's scales off his back for your fire resistant armor." << std::endl;
	std::cout << "You also find 50 gold." << std::endl;
}