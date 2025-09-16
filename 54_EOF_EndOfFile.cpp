#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream numberFile("numbers.txt");

    int a;

    // EOF -> CTRL + anykey
    while(cin >> a){
        numberFile << "Number: " << a << endl;
    }
    
    return 0;
}