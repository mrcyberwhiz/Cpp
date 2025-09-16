#include<iostream>

using namespace std;


int factorial(int number){
    cout << "Step : " << number  <<" * " << number-1 << endl;
    if (number == 1)
        return 1;
    else
        return number * factorial(number - 1);
}

int main(){

    cout << "Factorial is : " <<  factorial(5);

    return 0;
}