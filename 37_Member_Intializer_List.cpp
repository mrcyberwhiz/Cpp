#include<iostream>

using namespace std;

class Example{
    
    int a,b;

    public:
        /* Example(int x,int y){
            a = x;
            b = y;
        } */
        
        // Both are same.
        

        Example(int x, int y) : a(x), b(y){ }

        void printAB(){
            cout << a << " " << b << endl;
        }
};

int main(){

    Example object(1,2);
    object.printAB();
    
    return 0;
}