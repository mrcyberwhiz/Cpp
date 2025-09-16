#include <iostream>

using namespace std;

class Example{
    public:
        int number;
        Example(int n,int m){
            number = n + m;
        }
        void printHello(){
            cout << "Hello " << endl;
        }
        int printnumber(){
            cout << "The number is " << number << endl;
        }
};

int main(){

    Example object(2,8);

    Example* pointer = &object;

    pointer->printHello(); //-> this is arrow selection operator . this is call by pointer

    pointer->printnumber();

    return 0;
}