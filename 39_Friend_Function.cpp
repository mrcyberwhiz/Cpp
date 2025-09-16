#include <iostream>

using namespace std;

class Example{
    
    int var;
    
    public:
        Example(){
            var = 1;
        }

    // void changeVar(Example &e);- this is called function prototype. which means funtion returntype ,funtion name and funtion arguments.
    friend void changeVar(Example &e);

};

void changeVar(Example &e){
    e.var = 3;
    cout << e.var << endl;
}


int main(){

    Example object;
    changeVar(object);




    // changeVar(object); // object.var = 3; 


    return 0;
}