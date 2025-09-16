#include<iostream>

using namespace std;

class Human{
    private:
        int age;
    protected:
        int height = 123;
    public:
        string name = "Human name";
};

class Dhoni : public Human{
    public:
        void printValues(){
            //cout << age << endl; | not avalible this variable |
            cout << height << endl;
            cout << name << endl;
        }
};

int main(){

    Dhoni dhoni;
    dhoni.printValues();
    return 0;
}