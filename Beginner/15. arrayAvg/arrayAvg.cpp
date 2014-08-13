#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int arrayAvg();
double divRound(int, int);

int main(){
	arrayAvg();
	system("Pause");
	return 0;
}

int arrayAvg(){
	fstream file;
	file.open("arrayAvg.txt");

	fstream newfile;
	newfile.open("answer.txt",fstream::out);

	int numAvgs, total, newNum;
	file >> numAvgs;

	for(int x = 0; x < numAvgs; x++){
		total = 0;
		int i = 0;
		do{
			file >> newNum;
			i++;
			total += newNum;
		}
		while (newNum != 0);
		newfile << divRound(total, (i-1)) << endl;
	}
}

double divRound(int dividend, int divisor)
{	
	double a = dividend;
	double b = divisor;
    double y = a/b;
    if (fmod((y*10),10)  >= 5 or y < 0){
    	return round(y+.5);
    }
    else return round(y);
}