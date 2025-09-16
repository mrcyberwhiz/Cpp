#include<iostream>

using namespace std;

class Human{
    string name = "Dhoni";
    public:
        void printName(){
            cout << "Name : " << name << endl;
        }
};

class Dhoni : public Human{};

int main(){

    Dhoni dhoni;
    dhoni.printName();
    return 0;
}