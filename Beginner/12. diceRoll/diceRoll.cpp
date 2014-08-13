#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int diceRoll();

int main(){
	diceRoll();
	system("Pause");
	return 0;
}

int diceRoll(){
	fstream file;
	file.open("diceRoll.txt");

	fstream newfile;
	newfile.open("answer.txt", fstream::out);

	int numRolls;
	file >> numRolls;

	double currentRoll;
	for (int x = 0; x < numRolls; x++){
		int finalNumber;
		file >> currentRoll;

		currentRoll = currentRoll * 6;
		finalNumber = int(currentRoll) + 1;
		newfile << finalNumber << endl;
	}
}