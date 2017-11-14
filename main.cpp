#include "adventure.cpp"

int main()
{
	// call player constructor
	World();
	// call world constructor 
	Player();
	
	// initial prompt to player about the game
	cout << "WAKE UP!!! You've got a test in OOP today. \n You stayed up all night studying and you've left the things you need in various buuildings across campus that you visited last night. \n";
	// give the user options (which building do you want to try to  go to)
	//	type a building name or help to see ooptions 
	

	string userInput = "";
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
			cin >> userInput;
		}
	}

	// once at a building player input could call the enter function
	
	// once inside they could call the exit or search or a specific member function 
	 	// call player destructor

}
