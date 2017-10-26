# CS230AdventureGame
Build a text adventure game similar to the classic Colossal Cave game. 


Build a text adventure game similar to the classic Colossal Cave game. Your adventure game must include at least "rooms" and "items". The player of the game should be able to collect, move and "use" items in order to complete the adventure. Actions taken by the player should depend on several factors: which "room" the player is in, what item(s) the player has, what item(s) are in the current "room", and what actions have previously been taken.

Your design will determine what is possible in the adventure and what is not possible and how you represent the state of the adventure in your objects. For example, say drinking a potion makes the player invisible to the dragon, and therefore changes how a "room" is described or what actions are allowed. In order for this to be a part of the game some object will need to remember whether the player has drunk the potion yet. Should that be the player? or the "room"? or the potion? or something else? Consider that one way to know whether an action has been taken is to leave an "item" in the player's inventory, or in the room's inventory. It could even be an item that doesn't "print out", so the user of the program would not even have to know it was there. Of course that means "items" can be invisible to the user.

Your solution should include at least the following OO features:

data hiding / encapsulation
polymorphism / inheritance / "is a"
member "has a" relationship with a non-trivial object (Box "has a" left, but double is a trivial type so that wouldn't count)
pointer "has a" relationship with a non-trivial object (Polygon "has a" pts, but double[] is a trivial type so that wouldn't count)
"knows a" relationship (with a non-trivial, non-owned object)
Grading criteria / questions for Draft:

code compiles and runs?
code is organized in headers (.h) and source files (.cpp) correctly?
code follows the design you submitted?
code includes the OO features described above?
code is const correct?
code is memory leak free? respects allocation contract?
Submit zip file containing (all in the "root" of the zip):

headers and source files
any required data files, optional
demo.txt file such that adventure < demo.txt demonstrates interesting features of your game
I will compile your work using the following:

g++ -Wall -std=gnu++0x *.cpp -o adventure
