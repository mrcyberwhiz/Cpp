#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ofstream testFile("testFile.txt");

    if(testFile.is_open()){
        testFile << "Testing Files" << endl;
    }else{
        cout << "File Open Error" << endl;
    }

    testFile.close();

    return 0;
}