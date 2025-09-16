#include <iostream>

using namespace std;

void Print_HelloWorld(){
    cout << "Hello World!";
}

int addition(int a,int b){
    return a+b;
}

int print_some_Operation(int x,int y){
    int a = x;
    int b = y;
    cout << "A * B = " << x*y;
}

void fun();

int main(){ 

    Print_HelloWorld();
    cout << endl;
    print_some_Operation(2,2);
    cout << endl;
    cout << "A + B = " << addition(3,7);
    cout << endl;
    fun();
    return 0;
}

void fun(){
    cout << "hello";
}