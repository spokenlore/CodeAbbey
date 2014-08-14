#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int collatzSeq();

int main(){
	collatzSeq();
	system("PAUSE");
	return 0;
}

int collatzSeq(){
	fstream file;
	file.open("collatzSeq.txt");

	fstream newfile;
	newfile.open("answer.txt", fstream::out);

	int numTests;
	file >> numTests;

	int currentTest, count;

	for(int i = 0; i < numTests; i++){
		file >> currentTest;
		count = 0;
		while (currentTest != 1){
			if (currentTest % 2 == 0){
				currentTest = currentTest / 2;
			}
			else currentTest = (3*currentTest)+1;
			count++;
		}
		newfile << count << endl;
	}
}