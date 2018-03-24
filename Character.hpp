/*********************************************************************
** Program name: Final Project - Save the Princess
** Author: Daniel Church
** Date: 3/19/2018
** Description: This file contains the prototypes for the Character
** class. 
*********************************************************************/
#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
#include <iostream>
#include <list>
#include "Monster.hpp"

class Character
{
public:
	Character ();
	std::string getName();
	int getHealth();
	void setHealth(int);
	void setName(std::string);
	void addItem(std::string);
	void removeItem(std::string);
	void printList();
	int getGold();
	void addGold(int);
	int getAttack();
	int getArmor();
	void upgradeAttack();
	void upgradeArmor();
	void setClub(bool);
	void setScales(bool);
	void setStaff(bool);
	void setCanteen(bool);
	bool getClub();
	bool getScales();
	bool getStaff();
	bool getCanteen();
	void restoreHealth();
	void restoreGold();
	void clearList();
	int getMoves();
	void setMoves();
	void restoreMoves();

private:
	int armor;
	int movesLeft;
	bool hasClub;
	bool hasScales;
	bool hasStaff;
	bool hasCanteen;
	int health;
	int gold;
	int attack;
	std::string name;
	std::list<std::string> list;
};

#endif // !CHARACTER_HPP

