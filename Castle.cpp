/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the function definitions for the 
** castle class. This class inherits from Space.
*********************************************************************/
#include "Castle.hpp"

//Display intro message to zone
void Castle::writeIntro()
{
	std::cout << "As you enter the castle you hear a loud echoing voice from the balcony... " << std::endl;
	std::cout << "Who dares enter my castle! You fool! You don't realize the magnitude of my powers!!" << std::endl;
	std::cout << "Terry is angry and the battle begins..." << std::endl;
}

//Start fight 
void Castle::startEvent()
{
	writeIntro();
	doBattle();
	if (this->character->getHealth() > 0)
	{
		defeated = true;
	}
}

//Game is over at this point, had to return something
Space* Castle::chooseDestination()
{
	return nullptr;
}
