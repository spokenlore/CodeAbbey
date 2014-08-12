#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int minOfTwo();

int main(){
	system("PAUSE");
  return minOfTwo();
}

int minOfTwo(){
	fstream file;
	file.open("minOfTwo.txt");

	int numOfPairs, a, b;

	file >> numOfPairs;
	int arr[numOfPairs];

	for (int x = 0; x < numOfPairs; x++){
		file >> a;
		file >> b;
		if (a < b){
			arr[x] = a;
		}
		else arr[x] = b;
	}

	file.close();

	file.open("answer.txt", fstream::out);

	for (int y = 0; y < numOfPairs; y++){
		file << arr[y] << endl;
	}
	return 0;
}
