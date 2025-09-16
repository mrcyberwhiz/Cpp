#include <iostream>

using namespace std;

void printArray(int a[],int size){
    for (int i = 0; i < size ; i++){
        cout << a[i] << " ";
    }
    
}


int main(){
    int a[5] = {1,2,3,4,5};
    int b[6] = {1,2,3,4,5,6};
    cout << "Array A: "<< endl;
    printArray(a,5);
    cout << endl;
    cout << "Array B: "<< endl;
    printArray(b,6);
    return 0;
}