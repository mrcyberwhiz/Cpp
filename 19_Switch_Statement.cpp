#include <iostream>

using namespace std;

int main(){
    
    for(int i=1; i<=10; i++){
        switch (i){
            case 1:
                cout << "One" << endl;
                break;
            case 2:
                cout << "Two" << endl;
                break;
            default:
                cout << "Other"<< endl;
                break;
        }
    }
}