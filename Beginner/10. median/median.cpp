#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int median();

int main(){
	median();
	system("PAUSE");
	return 0;
}

int median(){
	fstream file;
	file.open("median.txt");

	fstream newfile;
	newfile.open("answer.txt", fstream::out);

	int numSets;
	file >> numSets;

	int num1, num2, num3;

	for (int x = 0; x < numSets; x++){
		file >> num1 >> num2 >> num3;

		if (num1 > num2 and num3 > num1 || num1 > num3 and num2 > num1){
			newfile << num1 << endl;
		}
		else if (num2 > num3 and num1 > num2 || num2 > num1 and num3 > num2){
			newfile << num2 << endl;
		}
		else newfile << num3 << endl;
	}
}