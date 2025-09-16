#include <iostream>

using namespace std;

int main(){

    string s1;
    string s2 = "Hello world!";
    string s3("Welcome To CsinTamil");

    // cin >> s;
    cout << "Enter String1 : " ;
    getline(cin,s1);

    cout << "String1 : " << s1 << endl;
    cout << "String2 : " << s2 << endl;
    cout << "String3 : " << s3 << endl;

    string test1 = "hello";
    string test2 = "world";

    cout << test1.substr(0,3) << endl; // hel
    cout << test1.substr(2,2) << endl; // ll


    cout << test1 << " " << test2 << endl;
    test1.swap(test2);
    cout << test1 << " " << test2 << endl;

    string test = "abcdabab";
    cout << test << " ab is avilable at " <<test.find("ab") << endl;
    cout << test << " ab is avilable at " <<test.rfind("ab") << endl;


    return 0;
}