#include <iostream>

using namespace std;

class Example{
    int a;
    
    public:
        Example(){
            a = 1;
        }

        void changeA(){
            a = 5;
        }

        void printA() const {
            cout << a << endl;
        }
};

int main(){

    Example object;
    object.printA();

    object.changeA();

    object.printA();

    // const Example o;
    // o.changeA();

    return 0;
}