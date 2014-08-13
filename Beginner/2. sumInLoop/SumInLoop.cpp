#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int sumInLoop();

int main(){
    cout << sumInLoop() << endl;
    system("pause");
    return 0;
}

// Adds values within a file named "sumInLoop.txt"
// Outputs answer to a .txt file named "answer.txt", creating one if one does not already exist.

int sumInLoop(){

    int numValues, currentValue, total;

    ifstream file;
    file.open("sumInLoop.txt");

    file >> numValues;

    for (int x = 0; x < numValues; x++){
        file >> currentValue;
        total += currentValue;
    }
    file.close();

    fstream newfile;
    newfile.open("answer.txt", fstream::out);

    newfile << total;

    return total;
}
