#include <iostream>

using namespace std;


void PrintThisNumber(int n) {
    cout << "Number is: " << n;
    cout << endl;
}

int printMultipleNumber(int a,int b,int c){
    cout << "a is " << a <<endl << " b is " << b << endl  << " c is " << c << endl;
    return a+b+c;
}

int print_Addition(int a=0,int b=0,int c=0,int d=0){

    cout << "Addition of Arguments is  " << a+b+c+d;
}

int main(){

    PrintThisNumber(9);

    printMultipleNumber(2,3,4);

    cout << printMultipleNumber(3,4,5);

    cout << endl;
    print_Addition(1,5,0,2);
    return 0;
}