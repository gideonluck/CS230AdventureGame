#include <iostream>
#include <cmath>
#include <sstream>
class Player
{
    private:
        Player();
        ~Player();
    public:

};

class World
{
    private:
        World();
        ~World();
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
        Library();
        ~Library();
        getCoffee();
};

class Moody : public Building
{
    private:

    public:
        Moody();
        ~Moody();      
        void worship(); 
};

class RecCenter : class Building
{
    private:

    public:
        RecCenter();
        ~RecCenter();
        void workOut();
};
class CampusCenter : public Building
{
	private:
		//
    public:
        CampusCenter();
        ~CampusCenter();
		void eatAtBean();
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
};

class BarretHall : public Building
{
	private:
		//
    public:
        BarretHall();
        ~BarretHall();
		void sleep();
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