class SchoolSupplies
{
	private:
		 isOwned;
	public:
		virtual void pickUp() = 0;
		virtual void examine() = 0;
		
}

class SchoolSupplies : TextBook
{
	private:
		string title, text, author;
	public:
		void pickUp();
		void examine();
		void open();
		void close();
		
		
}

class SchoolSupplies : ID
{
	private:
		string name;
		int banner;
	public:
		void pickUp();
		void examine();
}

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
}

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
}

class SchoolSupplies : Charger
{
	private:
		void isPluggedIn;
	public:
		void pickUp();
		void examine();
}
