// Samson Fung 2014.08.12

#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int sumsInLoop();

int main(){
    cout << sumsInLoop() << endl;
    return 0;
}

// sumsInLoop uses a text file named sumsInLoop, with first number within being the number of pairs to search for.
// Other values are used for totals of "pairs"
// Answer is outputted to an "answer.txt" file. One is created if one does not exist.

int sumsInLoop(){

    int numPairs, currentValue1, currentValue2;

    int x;

    ifstream file;
    file.open("sumsInLoop.txt");

    file >> numPairs;

    int pairTotals[numPairs];

    for (x = 0; x < numPairs; x++){
        file >> currentValue1;
        file >> currentValue2;
        pairTotals[x] = currentValue1 + currentValue2;
    }

    file.close();

    fstream newfile;
    newfile.open("answer.txt", fstream::out);

    for (x = 0; x < numPairs; x++){
        newfile << pairTotals[x] << " ";
    }
    system("PAUSE");
    return 0;
}
