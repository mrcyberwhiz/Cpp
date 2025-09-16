#include <iostream>

using namespace std;

double x = 3;
int main(){

    int x = 2;
    cout << x << endl;
    cout << ::x + x<< endl;

    return 0;
}
