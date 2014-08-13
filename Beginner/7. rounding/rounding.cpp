#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int rounding();
double divRound(double, double);

int main(){
	cout << rounding();
	system("pause");
	return 0;
}

int rounding(){

	fstream file;
	file.open("rounding.txt");

	fstream newfile;
	newfile.open("answer.txt", fstream::out);
	double a, b, totalpairs;
	file >> totalpairs;

	for (int x = 0; x < totalpairs; x++){
	file >> a >> b;
	newfile << divRound(a,b) << " ";}
	return 0;
}

double divRound(double dividend, double divisor)
{
    double y = dividend/divisor;
    if (fmod((y*10),10)  >= 5 or y < 0){
    	return round(y+.5);
    }
    else return round(y);
}