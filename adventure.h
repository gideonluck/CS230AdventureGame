#include <iostream>
#include <cmath>
class Player
{
    private:

    public:

}

class World
{
    private:

    public:
}
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

}
class Library : public Building
{
    private:

    public: 
        getCoffee();
}

class Moody : public Building
{
    private:

    public:         
        void worship(); 
}

class RecCenter : class Building
{
    private:

    public: 
        void workOut();
}
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