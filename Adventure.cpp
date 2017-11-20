#include "adventure.h"


World::World()
{
	exists = true;
	Library();
	Moody();
	RecCenter();
	CampusCenter();
	MBB();
	BarretHall();
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
			if(userinput == "Library")
				Library().enter();
			else if (userinput == "Moody")
				Moody().enter();
			else if (userinput == "RecCenter")
				RecCenter().enter();
			else if (userinput == "CampusCenter")
				CampusCenter().enter();
			else if (userinput == "BarretHall")
				BarretHall().enter();
			else if (userinput == "MBB")
				MBB().enter();
			excepted = false; 			
		}

	}
	if(excepted  == true )
		throw invalidMove();
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

////////////////////////
//		MOODY        //
///////////////////////

Moody::Moody()
{
    location = 1;
    hasBeenVisited = false;
    isLocked = false;

}

Moody::~Moody()
{
	isLocked = false;
}

void Moody::enter()
{
	Moody::hasBeenVisited = true; 
	string userInput;
	cout << "You have entered Moody Coliseum, you think you have left your ID card here. You may search for items by entering in 'Search'. You may leave by entering 'Exit'." << endl;
	cin >> userInput;
	bool tryWorked = false;
	while (tryWorked == false)
	{
		try{
			tryWorked = true;
			Moody::doThis(userInput);
		}
		catch(Moody::tryagain){
			cout << "That's not a valid command. For a list of valid commands type 'help'." << endl;
			Moody::doThis(userInput);
		}
	}
		
}
void Moody::exit()
{
	string userInput;
	cout << "You've exited Moody Coliseum. What building do you want to look in next?" << endl;
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
void Moody::search()
{
	string userInput;
	cout << "You've found your ID card! " << endl << "You're one step closer to getting to that test!" << endl;
	cout << "You should keep looking for the rest of your supplies." << endl;
	
	Moody::exit();

}

void Moody::Worship()
{
	cout << "You decided to worship, you have now gained favor with God." << endl;
	cout << "... but you don't have a lot of time left to look around. You should enter in a command." << endl;
	string userInput;
	cin >> userInput;
	bool tryWorked = false;
	while (tryWorked == false)
	{
		try{
			tryWorked = true;
			Moody::doThis(userInput);
		}
		catch(Moody::tryagain){
			cout << "That's not a valid command. For a list of valid commands type 'help'." << endl;
			Moody::doThis(userInput);
		}
	}
}
void Moody::doThis(string userInput)
{
	if(userInput == "Exit")
		Moody::exit();
	else if (userInput == "Search")
		Moody::search();
	else if(userInput == "Worship")
		Moody::Worship();
	else
		throw tryagain();

}

////////////////////////
//		RecCenter     //
///////////////////////

RecCenter::RecCenter()
{
    location = 1;
    hasBeenVisited = false;
    isLocked = false;

}

RecCenter::~RecCenter()
{
	isLocked = false;
}

void RecCenter::enter()
{
	RecCenter::hasBeenVisited = true; 
	string userInput;
	cout << "You have entered the Rec Center, you think you have left your backpack here. You may search for items by entering in 'Search'. You may leave by entering 'Exit'." << endl;
	cin >> userInput;
	bool tryWorked = false;
	while (tryWorked == false)
	{
		try{
			tryWorked = true;
			RecCenter::doThis(userInput);
		}
		catch(RecCenter::tryagain){
			cout << "That's not a valid command. For a list of valid commands type 'help'." << endl;
			RecCenter::doThis(userInput);
		}
	}
		
}
void RecCenter::exit()
{
	string userInput;
	cout << "You've exited the Rec Center. What building do you want to look in next?" << endl;
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
void RecCenter::search()
{
	string userInput;
	cout << "You've found your backpack! " << endl << "You're one step closer to getting to that test!" << endl;
	cout << "You should keep looking for the rest of your supplies." << endl;
	
	RecCenter::exit();

}

void RecCenter::Workout()
{
	cout << "You decided to workout, you can now run faster than Doct...Professor Prather." << endl;
	cout << "... but you don't have a lot of time left to look around. You should enter in a command." << endl;
	string userInput;
	cin >> userInput;
	bool tryWorked = false;
	while (tryWorked == false)
	{
		try{
			tryWorked = true;
			RecCenter::doThis(userInput);
		}
		catch(RecCenter::tryagain){
			cout << "That's not a valid command. For a list of valid commands type 'help'." << endl;
			RecCenter::doThis(userInput);
		}
	}
}
void RecCenter::doThis(string userInput)
{
	if(userInput == "Exit")
		RecCenter::exit();
	else if (userInput == "Search")
		RecCenter::search();
	else if(userInput == "Workout")
		RecCenter::Workout();
	else
		throw tryagain();
}

////////////////////////
//	  CampusCenter    //
///////////////////////


CampusCenter::CampusCenter()
{
    location = 1;
    hasBeenVisited = false;
    isLocked = false;

}

CampusCenter::~CampusCenter()
{
	isLocked = false;
}

void CampusCenter::enter()
{
	CampusCenter::hasBeenVisited = true; 
	string userInput;
	cout << "You have entered the Campus Center, you think you have left your laptop here... also you are feeling hungry!";
	cout << " You may search for items by entering in 'Search'. You may eat by entering 'eatAtBean'. You may leave by entering 'Exit'." << endl;
	cin >> userInput;
	bool tryWorked = false;
	while (tryWorked == false)
	{
		try{
			tryWorked = true;
			CampusCenter::doThis(userInput);
		}
		catch(CampusCenter::tryagain){
			cout << "That's not a valid command. For a list of valid commands type 'help'." << endl;
			CampusCenter::doThis(userInput);
		}
	}
		
}
void CampusCenter::exit()
{
	string userInput;
	cout << "You've exited the Campus Center. What building do you want to look in next?" << endl;
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
void CampusCenter::search()
{
	string userInput;
	cout << "You've found your laptop! " << endl << "You're one step closer to getting to that test!" << endl;
	cout << "You should keep looking for the rest of your supplies." << endl;
	
	CampusCenter::exit();

}

int CampusCenter::eatAtBean()
{
	cout << "You decided to eat at the bean!" << endl;
	cout << "You have died of dysentery." << endl;
	cout << "Game Over." << endl;
	return 0;
	string userInput;
	cin >> userInput;
	bool tryWorked = false;
	while (tryWorked == false)
	{
		try{
			tryWorked = true;
			CampusCenter::doThis(userInput);
		}
		catch(CampusCenter::tryagain){
			cout << "That's not a valid command. For a list of valid commands type 'help'." << endl;
			CampusCenter::doThis(userInput);
		}
	}
}
void CampusCenter::doThis(string userInput)
{
	if(userInput == "Exit")
		CampusCenter::exit();
	else if (userInput == "Search")
		CampusCenter::search();
	else if(userInput == "eatAtBean")
		CampusCenter::eatAtBean();
	else
		throw tryagain();
}

////////////////////////
//	  Barret Hall    //
///////////////////////


BarretHall::BarretHall()
{
    location = 1;
    hasBeenVisited = false;
    isLocked = false;

}

BarretHall::~BarretHall()
{
	isLocked = false;
}

void BarretHall::enter()
{
	BarretHall::hasBeenVisited = true; 
	string userInput;
	cout << "You have entered Barret Hall, you think you have left your Object Oriented Programming book here. You may search for items by entering in 'Search'. You may leave by entering 'Exit'." << endl;
	cin >> userInput;
	bool tryWorked = false;
	while (tryWorked == false)
	{
		try{
			tryWorked = true;
			BarretHall::doThis(userInput);
		}
		catch(BarretHall::tryagain){
			cout << "That's not a valid command. For a list of valid commands type 'help'." << endl;
			BarretHall::doThis(userInput);
		}
	}
		
}
void BarretHall::exit()
{
	string userInput;
	cout << "You've exited Barret Hall. What building do you want to look in next?" << endl;
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
void BarretHall::search()
{
	string userInput;
	cout << "You've found your laptop! " << endl << "You're one step closer to getting to that test!" << endl;
	cout << "You should keep looking for the rest of your supplies." << endl;
	
	BarretHall::exit();

}

void BarretHall::sleep()
{
	string userInput;
	cout << "You decided to go to sleep and have now woken up 1 minute before class. Better hurry and enter a command!" << endl;
	cin >> userInput;
	bool tryWorked = false;
	while (tryWorked == false)
	{
		try{
			tryWorked = true;
			BarretHall::doThis(userInput);
		}
		catch(BarretHall::tryagain){
			cout << "That's not a valid command. For a list of valid commands type 'help'." << endl;
			BarretHall::doThis(userInput);
		}
	}
}
void BarretHall::doThis(string userInput)
{
	if(userInput == "Exit")
		BarretHall::exit();
	else if (userInput == "Search")
		BarretHall::search();
	else if(userInput == "sleep")
		BarretHall::sleep();
	else
		throw tryagain();
}

////////////////////////
//	  MBB             //
///////////////////////


MBB::MBB()
{
    location = 1;
    hasBeenVisited = false;
    isLocked = false;

}

MBB::~MBB()
{
	isLocked = false;
}

void MBB::enter()
{
	MBB::hasBeenVisited = true; 
	string userInput;
	cout << "You have entered the Mabee Business Building , you have all of the items.";
	cout << "You may go to class by entering 'goToClass'." << endl;
	cin >> userInput;
	bool tryWorked = false;
	while (tryWorked == false)
	{
		try{
			tryWorked = true;
			MBB::doThis(userInput);
		}
		catch(MBB::tryagain){
			cout << "That's not a valid command. For a list of valid commands type 'help'." << endl;
			MBB::doThis(userInput);
		}
	}
		
}

void MBB::exit()
{
	;
}
void MBB::search()
{
	;
}
int MBB::goToClass()
{
	string userInput;
	cout << "You decided to go to class...";
	cout << "It was excactly on time...great job you made it to class on time which should not be an acclompishment.";
	cout << " It is class and it should be expected that you get there on time.";
	return 0;
}
void MBB::doThis(string userInput)
{
	if(userInput == "goToClass")
		MBB::goToClass();
	else
		throw tryagain();
}

