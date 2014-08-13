#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;

int totalVowels();

int main(){
	totalVowels();
	system("Pause");
	return 0;
}

int totalVowels(){
	fstream file;
	file.open("totalVowels.txt");

	fstream newfile;
	newfile.open("answer.txt", fstream::out);

	int totalLines;
	file >> totalLines;

	for (int x = 0; x < totalLines; x++){
		int total;
		string currentLine;
		while (getline(file, currentLine)){

		for (int y = 0; y < currentLine.length(); y++){
			if (currentLine[y] == 'a' || currentLine[y] == 'e' || currentLine[y] == 'i' || currentLine[y] == 'o' || currentLine[y] == 'u' || currentLine[y] == 'y')
					total++;
		}
		if (total != 0){
		newfile << total << endl;}
		total = 0;
	}
	}
}