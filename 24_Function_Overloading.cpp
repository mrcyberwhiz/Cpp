#include <iostream>

using namespace std;

void printTypeAndValue(int x){
    cout << "Integer : " << x << endl;
}
 
void printTypeAndValue(float y){
    cout << "Decimal : " << y << endl;
}


int main(){

    int a = 2;
    float b = 4; 
    int c = 3;
    float d = 1;



    printTypeAndValue(a);
    printTypeAndValue(b);
    printTypeAndValue(c);
    printTypeAndValue(d);



    return 0;
}