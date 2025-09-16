#include<iostream>

using namespace std;

int main(){


    int a[5] = {2,3,4,5,6};

    int b[5];

    for(int i=0; i<5; i++){
        cout << a[i] <<" ";
    }

    cout << endl;

    cout << "Enter the B array value " << endl;
    for(int i = 0; i<5; i++){
        cin >> b[i];
    }

    for(int i=0; i<5; i++){
        cout << b[i] <<" ";
    }

    cout << endl;
    cout << b[3];

    

    return 0;
}