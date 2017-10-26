#include <iostream>
#include <cmath>
class Player
{
    private:

    public:

};

class World
{
    private:

    public:
};
class Building
{
    private:
        double location;
        bool hasBeenVisited;
        bool isLocked;
        int* hasItems;
    public:
        Building();
        ~Building();
        virtual void enter;
        virtual void exit;
        virtual void search; 

};
class Library : public Building
{
    private:

    public: 
        getCoffee();
};

class Moody : public Building
{
    private:

    public:         
        void worship(); 
};

class RecCenter : class Building
{
    private:

    public: 
        void workOut();
};
class campusCenter : public Building
{
	private:
		//
	public:
		void eatAtBean();
};

class MBB : public Building
{
	private:
		//
	public:
		void goToClass();
		void isOnTime();
};

class barretHall : public Building
{
	private:
		//
	public:
		void sleep();
};
class SchoolSupplies
{
	private:
		 isOwned;
	public:
		virtual void pickUp() = 0;
		virtual void examine() = 0;
		
};

class SchoolSupplies : TextBook
{
	private:
		string title, text, author;
	public:
		void pickUp();
		void examine();
		void open();
		void close();
		
		
};

class SchoolSupplies : ID
{
	private:
		string name;
		int banner;
	public:
		void pickUp();
		void examine();
};

class SchoolSupplies : Laptop
{
	private:
		int batteryPercentage;
		string OS;
	public:
		void pickUp();
		void examine();
		void isDead();
		void browseWeb();
		void charge();
};

class SchoolSupplies : Backpack
{
	private:
		int size;
		string whatItems[100];
	public:
		void pickUp();
		void examine();
		void isEmpty();
		void get();
		void place();
		void contains();
};

class SchoolSupplies : Charger
{
	private:
		void isPluggedIn;
	public:
		void pickUp();
		void examine();
};