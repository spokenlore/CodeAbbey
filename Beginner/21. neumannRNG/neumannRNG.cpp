#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int neumannRNG();
int neumannCalc();
int neumannCheck();

int main(){
	neumannRNG();
	system("PAUSE");
	return 0;
}

int neumannRNG(){
	fstream file;
	file.open("neumannRNG.txt");

	fstream newfile;
	newfile.open("answer.txt",fstream::out);

	int numInputs, currentInput, currentNum, prevNum;

	newfile >> numInputs;

	for(int x = 0; x < numInputs; x++){
		currentNum = 0;
		newfile >> currentInput;
		while (currentNum != prevNum){

			currentNum = neumannCalc()

		}
	}

}

int neumannCalc

int neumannCheck