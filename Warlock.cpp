/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the function definitions for the
** warlock class. This class inherits from monster.
*********************************************************************/
#include "Warlock.hpp"

Warlock::Warlock()
{
	health = 100;
	attack = 30;
	name = "Terry the Warlock";
}

//When monster dies
void Warlock::deathOutro()
{
	std::cout << "My powers!!! They weren't so magnificent after all!" << std::endl;
	std::cout << "You step over Terry's mangled corpse and open the door the princess's room. Unfortunately, she's not" << std::endl;
	std::cout << "nearly as attractive as you were expecting. You begin to have second thoughts and decide to make a" << std::endl;
	std::cout << "run for the nearest pub instead." << std::endl << std::endl;
	std::cout << "Congratulations! You won the game!!!" << std::endl;
}
