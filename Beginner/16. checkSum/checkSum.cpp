#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int checkSum();

int main(){
	checkSum();
	system("Pause");
	return 0;
}

int checkSum(){
	long long int numValues, result, currentValue;
	long int modValue = 10000007;
	long int mulValue = 113;

	fstream file;
	file.open("checkSum.txt");
	fstream newfile;
	newfile.open("answer.txt",fstream::out);

	file >> numValues;

	for(int x = 0; x < numValues; x++){
		file >> currentValue;
		result = (result + currentValue) * mulValue;
		result = result % modValue;
	}
	newfile << result << endl;

}