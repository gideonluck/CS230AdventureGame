#include "adventure.h"



World::World()
{
	Library();
//	Moody();
//	RecCenter();
//	CampusCenter();
//	MBB();
//	BarretHall();

	
}


void Player::move(string userinput)
{
	string places[6] = {"Library", "Moody", "RecCenter", "CampusCenter", "MBB", "BarretHall"}; 
	bool excepted = true; 
	
	for(int i = 0;i < 6; i++)
	{
		if(userinput == places[i] )
		{
			Library().enter();
			excepted = false; 			
		}

	
	if(excepted  == true )
		throw invalidMove();
	}
}

void Library::enter()
{
	string userInput;
	cout << "You have entered the library, \n I think you have left your textbook. You may search for items by entering in Search. You may leave by entering Exit.";	
}
