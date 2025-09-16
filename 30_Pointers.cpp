#include<iostream>

using namespace std;

int main(){

    int a = 4;
    int b = 6;
    float c = 4.1;
    double d = 9.1;
    char str = 'w';

    int *ptr = &a;
    int *ptr1 = &b;
    float *ptr2 = &c;
    double *ptr3 = &d;
    char * ptr4 = &str;
    cout << ptr << endl << ptr1 << endl << ptr2 << endl << ptr3 << endl << ptr4 <<endl;

    return 0; 

}