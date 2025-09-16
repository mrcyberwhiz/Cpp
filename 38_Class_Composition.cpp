#include <iostream>
#include <string>

using namespace std;

class Birthday{

    int day;
    int month;
    int year;

    public:
        Birthday(int d, int m, int y){
            day = d;
            month = m;
            year = y;
        }

        void printDateOfBirth(){
            cout << "DOB  : " << day << "/" << month << "/" << year << endl;
        }
};

class Person{

    string name;
    Birthday bday;

    public:
        // bday variable is store b's value and if calss is used to another class we develop member intializer list.we con't able to store the b value into bday using constructor.

        /* Person(string s,Birthday b) { 
            name = s;
            bday = b;     ------ we can't able to give like this ------
        } */

        // if we use another class object into a class ,if we get a object in a constructor ,we con't able to assign into constructor.so we always use member intializer list. ---- || ---- if we want use in another class object into one class we get in constructor and con't able to assign so give only member intializer list and pass object.
 
        Person(string s,Birthday b): bday(b) { 
            name = s;
            // bday = b;
        }

        void printPersonData(){
            cout << "Name : " << name << endl; 
            bday.printDateOfBirth();
        }
};

int main(){

    Birthday b(03,10,2003);

    Person p("dhanush",b);
    p.printPersonData();

    return 0;
}