#include <iostream>

using namespace std;

template <class First, class Second>

Second add(First a, Second b){
    return a+b;
}

int main(){

    int a = 5;
    double b = 7.5;

    cout << add(a,b);

    return 0;
}