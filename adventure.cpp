#include "adventure.h"


World::World()
{
	exists = true;
	Library();
//	Moody();
//	RecCenter();
//	CampusCenter();
//	MBB();
//	BarretHall();
}
World::~World()
{

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
Library::Library()
{
    location = 1;
    hasBeenVisited = false;
    isLocked = false;

}
Library::~Library()
{
	isLocked = false;
}
void Library::getCoffee()
{
	cout << "You stopped by the Starbucks and spent $5.60 on a cup of bad coffee." << endl;
	cout << "You don't have a lot of time left to look around." << endl;
	string userInput;
	cin >> userInput;
	bool tryWorked = false;
	while (tryWorked == false)
	{
		try{
			tryWorked = true;
			Library::doThis(userInput);
		}
		catch(Library::tryagain){
			cout << "That's not a valid command. For a list of valid commands type 'help'." << endl;
			Library::doThis(userInput);
		}
	}
}
void Library::enter()
{
	Library::hasBeenVisited = true; 
	string userInput;
	cout << "You have entered the library, you think you have left your textbook here. You may search for items by entering in 'Search'. You may leave by entering 'Exit'." << endl;
	cin >> userInput;
	bool tryWorked = false;
	while (tryWorked == false)
	{
		try{
			tryWorked = true;
			Library::doThis(userInput);
		}
		catch(Library::tryagain){
			cout << "That's not a valid command. For a list of valid commands type 'help'." << endl;
			Library::doThis(userInput);
		}
	}
		
}
void Library::exit()
{
	string userInput;
	cout << "You've exited the Library. What building do you want to look in next?" << endl;
	cin >> userInput;
	
	bool tryWorked = false;
	while (tryWorked == false)
	{
		try {
			// test inputs
			tryWorked = true;
			Player::move(userInput);	
		}
		catch(Player::invalidMove){
			
			cout << "It's not a good idea to go there, you didn't leave any supplies for class there." << endl;
			
		}
	}
}
void Library::search()
{
	string userInput;
	cout << "You've found your textbook! " << endl << "You're one step closer to getting to that test!" << endl;
	cout << "You should keep looking for the rest of your supplies." << endl;
	
	Library::exit();

}
void Library::doThis(string userInput)
{
	if(userInput == "Exit")
		Library::exit();
	else if (userInput == "Search")
		Library::search();
	else if(userInput == "getCoffee")
		Library::getCoffee();
	else
		throw tryagain();

}
