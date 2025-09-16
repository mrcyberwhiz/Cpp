#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream testFile;
    testFile.open("testFile.txt");

    testFile << "Testing Files" << endl;

    testFile.close();

    return 0;
}