#include<iostream>

using namespace std;

class Human{
    public:
        Human(){
            cout << "Human constructor" << endl; //1
        }
        ~Human(){
            cout << "Human destructor" << endl; //5
        }
};

class Dhoni : public Human{
    public:
        Dhoni(){
            cout << "Dhoni constructor" << endl; //2
        }
        ~Dhoni(){
            cout << "Dhoni destructor" << endl; //4
        }
};

int main(){
    Dhoni dhoni;
    cout << "Main function" << endl; // 3
    return 0;
}