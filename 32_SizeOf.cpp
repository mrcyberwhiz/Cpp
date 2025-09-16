#include<iostream>

using namespace std;

int main(){

    int a = 5;
    char b ='c';
    double c = 5;

    int d[5];

    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;

    return 0;
}


// bytes = 8 bits 
// int - 4 bytes
// char - 1 byte
// double - 8 bytes
// array - 20 bytes 
