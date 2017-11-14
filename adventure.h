#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

class Player
{
    private:
		
        
    public:
	    Player();
        ~Player();
        
        
        	
};

class World
{
    private:

    public:
    	//world constructor could call all our building constructors 
	    World();
        ~World();
};

class Building
{
    private:
        double location;
        bool hasBeenVisited;
        bool isLocked;
        int* hasItems;
    public:
    	// 
        Building(){}
        virtual ~Building(){}
        
        virtual void enter();
        virtual void exit();
        virtual void search(); 

};

class Library : public Building
{
    private:

    public:
        Library();
        ~Library();
        getCoffee();
           
        void enter();
        void exit();
        void search(); 

};

class Moody : public Building
{
    private:

    public:
        Moody();
        ~Moody();      
        void worship();
        
        void enter();
        void exit();
        void search(); 
};

class RecCenter : class Building
{
    private:

    public:
        RecCenter();
        ~RecCenter();
        void workOut();
                   
        void enter();
        void exit();
        void search(); 
};
class CampusCenter : public Building
{
	private:
		//
    public:
        CampusCenter();
        ~CampusCenter();
		void eatAtBean();
		           
        void enter();
        void exit();
        void search(); 
};

class MBB : public Building
{
	private:
		//
    public:
        MBB();
        ~MBB();
		void goToClass();
		void isOnTime();
		           
        void enter();
        void exit();
        void search(); 
};

class BarretHall : public Building
{
	private:
		//
    public:
        BarretHall();
        ~BarretHall();
		void sleep();
		           
        void enter();
        void exit();
        void search(); 
};


class SchoolSupplies
{
	private:
		 isOwned;
    public:
        SchoolSupplies();
        ~SchoolSupplies();
		virtual void pickUp() = 0;
		virtual void examine() = 0;
		
};

class TextBook : public SchoolSupplies 
{
	private:
		string title, text, author;
    public:
        TextBook();
        ~TextBook();
		void pickUp();
		void examine();
		void open();
		void close();
		
		
};

class ID : public SchoolSupplies
{
	private:
		string name;
		int banner;
    public:
        ID();
        ~ID();
		void pickUp();
		void examine();
};

class Laptop : SchoolSupplies
{
	private:
		int batteryPercentage;
		string OS;
    public:
        Laptop();
        ~Laptop();

		void pickUp();
		void examine();
		void isDead();
		void browseWeb();
		void charge();
};

class Backpack : SchoolSupplies
{
	private:
		int size;
		string whatItems[100];
    public:
        Backpack();
        ~Backpack();
		void pickUp();
		void examine();
		void isEmpty();
		void get();
		void place();
		void contains();
};

class Charger : SchoolSupplies
{
	private:
		void isPluggedIn;
    public:
        Charger();
        ~Charger();
		void pickUp();
		void examine();
};
