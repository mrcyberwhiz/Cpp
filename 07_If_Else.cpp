#include <iostream>

using namespace std;

int main(){

    int a = 21;

    int b = 9;

    if(a > b){
        if(a!=0){
            a = 0;
        }
    }

    if (a == 0)    {
        cout << "A is greater then B" << endl;
    }else{
        cout << "B is greater then A" << endl;
    }

    // or
    int x = 5, y = 10;
    cout << ((x > y) ? "x is greater":  "Y is greater") << endl;
    


    return 0;
}