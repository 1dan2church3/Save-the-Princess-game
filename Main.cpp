/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: Save the Princess is a fantasy game where the main
** character must save the princess from an evil warlock who is 
** keeping her captive in his castle. In order to save her, the 
** player must defeat a series of monster who hold items that are 
** needed to enter the other zones. The monsters also drop gold 
** which the player can use to upgrade his armor or weapon. If
** the player does not rescue the princess within 12 moves, or
** the player dies during combat, the game is over.
*********************************************************************/
#include "Menu.hpp"
#include "Space.hpp"
#include "Armory.hpp"
#include "Castle.hpp"
#include "Cave.hpp"
#include "Character.hpp"
#include "Desert.hpp"
#include "Forest.hpp"
#include "Lava.hpp"
#include "Swamp.hpp"
#include <iostream>


int main()
{
	Menu menu;

	menu.showMenu();
}

