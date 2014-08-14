#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int bubbleSort();
bool arrCheck(int [], int);

int main(){
	bubbleSort();
	system("PAUSE");
	return 0;
}

int bubbleSort(){
	fstream file;
	file.open("bubbleSort.txt");

	fstream newfile;
	newfile.open("answer.txt", fstream::out);

	int numTests;
	file >> numTests;

	int arr[numTests];

	int tempvar = 0, numPasses = 0, numSwaps = 0;

	for (int i = 0; i < numTests; i++){
		file >> tempvar;
		arr[i] = tempvar;
	}

	while (true){
	for(int i = 0; i < numTests-1; i++){
		if (!(arr[i] <= arr[i+1])){
			tempvar = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = tempvar;
			numSwaps++;
		}
	}

	if (arrCheck(arr, numTests) == true){
			newfile << numPasses << " " << numSwaps;
			cout << endl;
			return 0;
		}
	else numPasses++;
}
}


bool arrCheck(int arr[], int length){
	for (int i = 0; i < length-1; i++){
		cout << arr[i] << " ";
		if (arr[i] > arr[i+1]){
			cout << endl;
			return false;
		}
	}
	cout << endl;
	return true;
}