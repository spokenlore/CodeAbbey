#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int arrayCounter();

int main(){
	arrayCounter();
	system("Pause");
	return 0;
}

int arrayCounter(){
	fstream file;
	file.open("arrayCounter.txt");
	fstream newfile;
	newfile.open("answer.txt", fstream::out);

	int numValues, checkValue, currentValue;
	file >> numValues >> checkValue;

	int arr[checkValue];

	for (int i = 0; i < numValues; i++){
		file >> currentValue;
		arr[currentValue] += 1;
	}
	
	for (int count = 1; count < checkValue + 1; count++){
		newfile << arr[count] << " ";
	}
}