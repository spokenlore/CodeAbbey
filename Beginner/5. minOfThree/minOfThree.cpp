#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int minOfThree();

int main(){
	system("PAUSE");
  return minOfThree();
}

int minOfThree(){
	fstream file;
	file.open("minOfThree.txt");

	int numOfPairs, a, b, c;

	file >> numOfPairs;
	int arr[numOfPairs];

	for (int x = 0; x < numOfPairs; x++){
		file >> a;
		file >> b;
		file >> c;
		if (a < b and a < c){
			arr[x] = a;
		}
		else if (b < a and b < c){
			arr[x] = b;
		}
		else arr[x] = c;

	}

	file.close();

	file.open("answer.txt", fstream::out);

	for (int y = 0; y < numOfPairs; y++){
		file << arr[y] << endl;
	}
	return 0;
}
