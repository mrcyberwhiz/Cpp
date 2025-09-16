#include<iostream>

using namespace std;

class Example{

    int a;

    public:
        Example(){
            a = 1;
        }

        void printA(){
            cout << "a = " << a << endl;
            cout << "this->a = " << this->a << endl; // -this keyword is use in classes, it is pointer -this keyword is store e object address. so it's show a's value | arrow operator
            cout << "(*this).a = " << (*this).a << endl; // this is going to pointers address and take the address value | dot operator
        }

};


int main(){

    // this keyword is use in classes

    Example e;
    e.printA();

   return 0;
}