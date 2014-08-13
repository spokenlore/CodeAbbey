#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int sumDigits();

int main(){
	sumDigits();
	system("pause");
	return 0;
}

int sumDigits(){
	fstream file;
	file.open("sumDigits.txt");

	fstream newfile;
	newfile.open("answer.txt", fstream::out);

	int numValues;
	file >> numValues;

	for (int i = 0; i < numValues; i++){
		int a, b, c, total = 0, sumDigits = 0;

		file >> a >> b >> c;

		total = a * b + c;

		while (total > 0){
			if (total < 10){
				sumDigits += total;
				total = 0; 
			}
			sumDigits += total % 10;
			total = total / 10;
		}
		newfile << sumDigits << endl;
	}
}