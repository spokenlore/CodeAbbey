#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <math.h>

using namespace std;

int BMI();

int main(){
	BMI();
	system("PAUSE");
	return 0;
}

int BMI(){
	fstream file;
	file.open("BMI.txt");

	fstream newfile;
	newfile.open("answer.txt", fstream::out);

	int numPeople;
	file >> numPeople;

	for (int x = 0; x < numPeople; x++){
		double height, weight, currentBMI;
		file >> weight >> height;

		currentBMI = weight / pow(height, 2);

		cout << currentBMI << endl;

		if (currentBMI >= 30.0){
			newfile << "obese" << endl;
		}
		else if (currentBMI >= 25.0){
			newfile << "over" << endl;
		}
		else if (currentBMI >= 18.5){
			newfile << "normal" << endl;
		}
		else newfile << "under" << endl;

	}
}