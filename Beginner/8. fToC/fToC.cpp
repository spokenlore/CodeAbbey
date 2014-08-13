// Samson Fung 2014.08.12
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int fToC();
double divRound(double);

int main(){
	fToC();
	system("pause");
	return 0;
}


int fToC(){
	fstream file;
	file.open("fToC.txt");

	fstream newfile;
	newfile.open("answer.txt", fstream::out);
	int numTemps;
	file >> numTemps;

	for (int x = 0; x < numTemps; x++){
		double currentFTemp;
		file >> currentFTemp;
		double y = ((currentFTemp - 32) * 5/9); 
		newfile << divRound(y) << " ";
	}
}

double divRound(double number)
{
    double y = number;
    if (fmod((y*10),10)  >= 5 or y < 0){
    	return round(y+.5);
    }
    else return round(y);
}