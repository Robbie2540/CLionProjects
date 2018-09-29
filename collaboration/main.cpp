#include <iostream>
#include <vector>
using namespace std;

// characters
class Human {
   public:
   int Hp{};
   int Karma{};
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
   Wolf Wolf_lvl1{};
   Wolf_lvl1.attack_Power = 100;
   Wolf_lvl1.Hp = 200;

   // player   
   Human mainChar;
   mainChar.Hp = 100;
   mainChar.Karma = 0;
   mainChar.inventory.emplace_back("Shirt");
   mainChar.inventory.emplace_back("Pants");
   mainChar.inventory.emplace_back("Shoes");

   // sword
   Weapon sword{};
   sword.attack_Power = 25;
   sword.condition = 0.5;

   // old lady
   Human OldLady;
   OldLady.Hp = 10;
   OldLady.Karma = 10;

   // main game loop
   while (mainChar.Hp > 0) {
      cout << "What type of player are you?\n" << endl; // initiates character type

      cout << "At any time press any key to continue the dialogue" << endl;

      cout << "Are you the run and gun type that acts instantly without thinking always just in time to save the day?" << endl;

      cout << "Or are you the type of player who likes to sit plan and take a more thoughtful approach to the current situation" << endl;
      
      cout << "Or are you a more balanced type that likes to switch it up?" << endl;

      // TODO: infinite loop if use string
      double characterType;
      while (true) {
         cout << "press 1,2,3" << endl;
         cin >> characterType;
         if (characterType == 1) {
            break;
         } else if (characterType == 2) {
            break;
         } else if (characterType == 3) {
            break;
         }
      }

      //initial wake up event
      cout << "Waking up, you have no idea where you are you look around to get your bearings when...";
      cout << "Oh shit, a wolf comes out of nowhere!" << endl;
      cout << "What do you do?";

      // force end of loop
      mainChar.Hp = 0;
   };

   return 0;
};