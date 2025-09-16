#include <iostream>

using namespace std;

class Batsman{
    public:

        // pureVirtual function.
        virtual void specialShot() = 0;

        // virtual function (have a function body)
        // virtual void specialShot(){
        //     cout << "Special Shot" << endl;
        // }
        
    
};

class Dhoni : public Batsman{
    public:
        void specialShot(){
            cout << "Helicopter Shot" << endl;
        }
};

class Kohli : public Batsman{
    public:
        void specialShot(){
            cout << "Cover Drive" << endl;
        }
};

int main(){

    Dhoni dhoni;
    Kohli Kohli;

    Batsman* Batsman1 = &dhoni;
    Batsman* Batsman2 = &Kohli;

    Batsman1 -> specialShot();
    Batsman2 -> specialShot();

    return 0;
}