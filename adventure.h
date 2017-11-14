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

	    Player(){ exists = true; }
        ~Player(){ exists = false; }
        
    	static void move(string userinput);
    	
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
        bool isLocked;
        int* hasItems;
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

//class Moody : public Building
//{
//    private:
//
//    public:
//        Moody();
//        ~Moody();      
//        void worship();
//        
//        void enter();
//        void exit();
//        void search(); 
//};
//
//class RecCenter : public Building
//{
//    private:
//
//    public:
//        RecCenter();
//        ~RecCenter();
//        void workOut();
//                   
//        void enter();
//        void exit();
//        void search(); 
//};
//class CampusCenter : public Building
//{
//	private:
//		//
//    public:
//        CampusCenter();
//        ~CampusCenter();
//		void eatAtBean();
//		           
//        void enter();
//        void exit();
//        void search(); 
//};
//
//class MBB : public Building
//{
//	private:
//		//
//    public:
//        MBB();
//        ~MBB();
//		void goToClass();
//		void isOnTime();
//		           
//        void enter();
//        void exit();
//        void search(); 
//};
//
//class BarretHall : public Building
//{
//	private:
//		//
//    public:
//        BarretHall();
//        ~BarretHall();
//		void sleep();
//		           
//        void enter();
//        void exit();
//        void search(); 
//};
//
//
//class SchoolSupplies
//{
//	private:
//		bool isOwned;
//    public:
//        SchoolSupplies();
//        ~SchoolSupplies();
//		virtual void pickUp() = 0;
//		virtual void examine() = 0;
//		
//};
//
//class TextBook : public SchoolSupplies 
//{
//	private:
//		string title, text, author;
//    public:
//        TextBook();
//        ~TextBook();
//		void pickUp();
//		void examine();
//		void open();
//		void close();
//		
//		
//};
//
//class ID : public SchoolSupplies
//{
//	private:
//		string name;
//		int banner;
//    public:
//        ID();
//        ~ID();
//		void pickUp();
//		void examine();
//};
//
//class Laptop : public SchoolSupplies
//{
//	private:
//		int batteryPercentage;
//		string OS;
//    public:
//        Laptop();
//        ~Laptop();
//
//		void pickUp();
//		void examine();
//		void isDead();
//		void browseWeb();
//		void charge();
//};
//
//class Backpack :public SchoolSupplies
//{
//	private:
//		int size;
//		string whatItems[100];
//    public:
//        Backpack();
//        ~Backpack();
//		void pickUp();
//		void examine();
//		void isEmpty();
//		void get();
//		void place();
//		void contains();
//};
//
//class Charger : public SchoolSupplies
//{
//	private:
//		bool isPluggedIn;
//    public:
//        Charger();
//        ~Charger();
//		void pickUp();
//		void examine();
//};
//

