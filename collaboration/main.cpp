#include <iostream>
#include <vector>
using namespace std;

// characters
class Human {
   public:
   int Hp;
   int Karma;
   vector<string> inventory;
};

// Wolf
class Wolf {
   public:
   int attack_Power;
   int Hp;
};

// weapons
class Weapon {
   public:
   int attack_Power;
   double condition; // percentage
};

int main() {
   Wolf Wolf_lvl1;
   Wolf_lvl1.attack_Power = 100;
   Wolf_lvl1.Hp = 200;

   // player   
   Human mainChar;
   mainChar.Hp = 100;
   mainChar.Karma = 0;
   mainChar.inventory.push_back("Shirt");
   mainChar.inventory.push_back("Pants");
   mainChar.inventory.push_back("Shoes");

   // sword
   Weapon sword;
   sword.attack_Power = 25;
   sword.condition = 0.5;

   // old lady
   Human OldLady;
   OldLady.Hp = 10;
   OldLady.Karma = 10;

   while (mainChar.Hp > 0) {
      cout << "What type of player are you?" << endl; // initiates character type

      cout << "At any time press any key to continue the dialogue" << endl;

      cout << "Are you the run and gun type that acts instantly without thinking always just in time to save the day?" << endl;

      cout << "Or are you the type of player who likes to sit plan and take a more thoughtful approach to the current situation" << endl;
      
      cout << "Or are you a more balanced type that likes to switch it up?" << endl;
    
      int i = 2;
      int characterType;
      do {
         cout << "press 1,2,3" << endl;
      } while (cin >> characterType != 1);

      //initial wake up event
      cout << "Waking up, you have no idea where you are you look around to get your bearings when...";
	   cout << "Oh shit, a wolf comes out of nowhere!";
	   cout << "What do you do?";
   };

   return 0;
};