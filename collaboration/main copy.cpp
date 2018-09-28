#include <iostream>
using namespace std;

int main()
{
	string name;
	string favFood;
	
	cout << "What is your name?";
	cin >> name;
	cout << "Hello, " << name << ", nice to see you what is your fav food?";
	cin >> favFood;
	cout << "Great! " << favFood << " is great!" << endl;
	return 0;
}
