#include <iostream>

using namespace std;

class Number{
    int number;
    
    public:
        Number(){} //this is empty constructor number is 0

        Number(int d){
            number = d;
            cout <<"D : " <<d << endl;
        }

        Number operator+(Number x){
            Number newNumber; // temp obj
            cout <<"number : " << number << endl; 
            cout <<"x.number : " << x.number << endl;
            
            cout << number <<" + " << x.number << endl;
            newNumber.number = number + x.number;
            
            return newNumber;
        }

        void printNumber(){
            cout <<"number : " << number << endl;
        }


};

int main(){

    // int a = 4;
    // int b = 5;

    Number a(4);
    Number b(5);

    Number c = a + b; //a.operator+(b)

    c.printNumber();

    return 0;
}