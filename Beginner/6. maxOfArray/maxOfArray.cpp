#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

int maxOfArray();

int main(){
	cout << maxOfArray() << endl;
	system("Pause");
	return 0;
}

int maxOfArray(){
	int arr[300], currentMax, currentMin;

	fstream file;
	file.open ("maxOfArray.txt");
	for (int x = 0; x < 300; x++){
		file >> arr[x];
	}

	file.close();

	currentMax = currentMin = arr[0];

	for (int y = 1; y < 300; y++){
		if (currentMax < arr[y])
			currentMax = arr[y];
		if (currentMin > arr[y])
			currentMin = arr[y];
	}

	file.open("answer.txt", fstream::out);
	file << currentMax << " " << currentMin << endl;
	return 0;
}