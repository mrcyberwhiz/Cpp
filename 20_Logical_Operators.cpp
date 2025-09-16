#include <iostream>

using namespace std;

int main(){

    int age = 19;
    bool voting_registered = true;

    // && - and
    // || - or


    if (age >= 18 and voting_registered == true){
        cout << "Eligible to vote" << endl;
    } else {
        cout << "Not Eligible to vote " << endl;
    }

    // or 
    

    cout << ((age >= 18 && voting_registered == true) ? "Eligible to vote":  "Not Eligible to vote ") << endl;




    return 0;
}