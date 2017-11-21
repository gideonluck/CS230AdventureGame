#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
using namespace std;
	

class World
{
    private:
		bool exists;
    public:
    	//world constructor could call all our building constructors 
	    World();
        ~World();
        void MoveAround(string UserInput);     
};
class Player
{
    private:
		bool exists;
    public:
    	class invalidMove{};
		static string items[5];
		static int howMany;// {"blah", "blah", "blah", "blah", "blah"};
	    Player();//{ exists = true; }
        ~Player(){ exists = false; }
        
    	static void move(string userinput);	
};
class Building
{
    private:
        double location;
        bool hasBeenVisited;
    public:
    	// 
        Building(){location = 0; }
        ~Building(){}
        
        virtual void enter() = 0;
        virtual void exit()= 0;
        virtual void search() = 0; 
        virtual void doThis(string userInput) = 0;
};

class Library : public Building
{
    private:
	    double location;
        bool hasBeenVisited;
    public:
    	class tryagain{};
        Library();
        ~Library();
        
        void getCoffee();
           
        void enter();
        void exit();
        void search();
        void doThis(string userInput);

};

class Moody : public Building
{
    private:
        double location;
        bool hasBeenVisited;

    public:
    	class tryagain{};
        Moody();
        ~Moody();      
        void Worship();
        
        void enter();
        void exit();
        void search(); 
        void doThis(string userInput);
};

class RecCenter : public Building
{
    private:
        double location;
        bool hasBeenVisited;
    public:
    	class tryagain{};
        RecCenter();
        ~RecCenter();
        void Workout();
                  
        void enter();
        void exit();
        void search(); 
        void doThis(string userInput);
};
class CampusCenter : public Building
{
	private:
		double location;
        bool hasBeenVisited;
    public:
    	class tryagain{};
        CampusCenter();
        ~CampusCenter();
		int eatAtBean();
		           
        void enter();
        void exit();
        void search(); 
        void doThis(string userInput);
};

class BarretHall : public Building
{
	private:
		double location;
        bool hasBeenVisited;
    public:
    	class tryagain{};
        BarretHall();
        ~BarretHall();
		
		void sleep();		           
        void enter();
        void exit();
        void search();
        void doThis(string userInput);
};

class MBB : public Building
{
	private:
		double location;
        bool hasBeenVisited;
    public:
    	class tryagain{};
        MBB();
        ~MBB();
		int goToClass();
		void exit();
		void search();
        void enter();
        void doThis(string userInput);
};