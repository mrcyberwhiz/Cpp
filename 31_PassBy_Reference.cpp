#include<iostream>

using namespace std;

void passByValue(int a){
    cout << "This function is only change value not the variable's address value" << endl;
    cout << a << endl;
    a = 45;
    cout << a << endl;
    // address 1 - 10(x)
    // address 2 - 45(a) 
    // pass by value is create a new memory space and store value
}

void passByReference(int * a){
    cout << "This function is change address's value" << endl;
    cout << *a << endl;
    *a = 45; // this * indicates value of a's address
    cout << *a;
    // address 1 - 10(x)
    // address 2 - (address of x value) address 1 (*a) change into 45(x) 
}

int main(){
    int x = 10;
    passByValue(x);
    passByReference(&x);
    return 0;

}