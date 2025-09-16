#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    
    ifstream numberFile("numbers.txt");
    string s;
    int a;

    while(numberFile >> s >> a){
        cout << s << a << endl;
    }


    return 0;
}