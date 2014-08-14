#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int modArithmetic();

int main(){
	modArithmetic();
	system("Pause");
	return 0;
}

int modArithmetic(){
	fstream file;
	file.open("modArithmetic.txt");

	fstream newfile;
	newfile.open("answer.txt", fstream::out);

	long int initialValue, newOperand;
	char operation;

	file >> initialValue;
	long int total = initialValue;

	while (file >> operation >> newOperand){
		cout << total << " " << operation << " " << newOperand << endl;
		if (operation == '%'){
			total = total % newOperand;
		}
		else if (operation == '+'){
			total += newOperand;
		}
		else total = total * newOperand;
	}
	cout << total << endl;
	newfile << total;
}