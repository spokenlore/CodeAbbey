#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int weightedSum();
int pow(int, int);

int main(){
	weightedSum();
	system("PAUSE");
	return 0;
}

int weightedSum(){
	fstream file;
	file.open("weightedSum.txt");

	fstream newfile;
	newfile.open("answer.txt", fstream::out);

	long int numValues, newNum, currentExp, currentTotal;
	file >> numValues;

	for (int x = 0; x < numValues; x++){
		currentExp = 0, currentTotal = 0;
		file >> newNum;
		while (newNum > pow(10,currentExp)){
			currentExp++;
		}

		while (newNum > 0){
			if (newNum < 10){
				currentTotal += newNum;
				newNum = 0;
			}
			int currentDigit = newNum % 10;
			currentTotal += currentDigit * currentExp;
			newNum = newNum / 10;
			currentExp--;
		}
		newfile << currentTotal << endl;
	}
}

int pow(int base, int exp){
	long int result = base;
	while (exp > 1){
		result *= base;
		exp--;
	}
	return result;
}