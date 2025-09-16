#include <iostream>

using namespace std;

int main(){


    // int fatherAge = 50;
    // int sonAge = 52;


    /* if(sonAge > fatherAge){
        throw -1;
    } */

    // cout << "Here" << endl;

   /* try{
        int fatherAge = 50;
        int sonAge = 52;


        if(sonAge > fatherAge){
            throw -1;
        }
    } catch (int x){
        cout << "Son age is greather than father " << x << endl;
    } */

    try{
        int fatherAge = 50;
        int sonAge = 51;


        if(sonAge > fatherAge){
            throw "wrongAge";
        }
    } catch (...)/*Ellipsis Operator*/{
        cout << "Son age is greather than father "<< endl;
    } 

    return 0;
}