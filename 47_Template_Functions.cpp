#include<iostream>

using namespace std;

template<class T>

T add(T a, T b){
    return a + b;
}

int main(){

    int a = 5, b = 7;
    
    cout << add(a,b) << endl;

    double c = 5.5, d = 8.5;

    cout << add(c,d);


    return 0;
}