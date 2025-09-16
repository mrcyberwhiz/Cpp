#include <iostream>

using namespace std;

int main(){

    int val = 5;
    cout <<"value : " << val << endl;

    cout << "----- Increment Operators ----- " << endl;

    val = 5;
    ++val;
    cout << "Pre Increment " << val << endl;

    val = 5;
    val++;
    cout << "Post Increment " << val << endl << endl;

    cout << "----- Decrement Operators -----" << endl;
    
    val = 5;
    val--;
    cout << "Post Decrement " << val << endl;

    val = 5;
    --val;
    cout << "Pre Decrement " << val << endl << endl;

    val = 5;
    cout << "val is : " << val++ <<". if val++ now val is "<< val << endl;
    val = 5;
    cout << "val is : " << val-- <<". if val-- now val is "<< val << endl;

    val = 5;
    cout << "val is : " << ++val << endl;
    val = 5;
    cout << "val is : " << --val << endl;
    return 0;
}