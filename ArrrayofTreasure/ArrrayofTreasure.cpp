// ArrrayofTreasure.cpp : This file contains the 'main' function. Program execution begins and ends there.
// The first step was putting an int variable in the founded treasure chest. The next line contained a boolean operator with a treasure chest array. In the array, the word “false” was repeated five times. Next, some statements asked the player to open one of the five treasure chests on the map. Then a pointer was added to allow the player to select a treasure and subtract it by one. This statement is true. However, if they find an empty treasure chest, he or she would try again. This used a while statement by having the treasureChestArray plus four which it makes false. If the player opened a treasure chest with a token, they won. It is done with the same method with the pointer and subtracts it by one. I had no problems with this assignment.

#include "stdafx.h"
#include <iostream>
#include "tchar.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {

	int foundTreasureChest;
	bool treasureChestArray[5] = { false, false, false, false, false };

	cout << " Welcome to Array of Treasure. This map contains five treasure chests. " << endl;
	cout << " Guess on which chest has the token, enter an input of a number between 1 and 5. " << endl;
	cin >> foundTreasureChest;

	*(treasureChestArray + (foundTreasureChest - 1)) = true;

	while (*(treasureChestArray + 4) == false) {
		cout << "Sorry, try again. Input a number (1-5) of a chest that you just open." << endl;
		cin >> foundTreasureChest;

		*(treasureChestArray + (foundTreasureChest - 1)) = true;
	}
	cout << "Congrats, you found the token! You leveled up!" << endl;

	return 0;
}