#include<iostream>

using namespace std;

int main(){

    int a[3];

    int * p = &a[1];
    int * p1 = &a[2];
    int * p2 = &a[3];

    cout << p << endl;
    cout << p1 << endl;
    cout << p2 << endl;

    p1 +2;
    cout << p1 << endl;

    return 0;
}
// bytes = 8 bits 
// int - 4 bytes
// char - 1 byte
// double - 8 bytes
// array - 20 bytes 
