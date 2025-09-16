#include <iostream>

using namespace std;

template <class T>
class Value{
    public:
        Value(T a){
            cout << a << " is a number" << endl;
        }
};

template <>
class Value<char> {
    public:
        Value(char a){
            cout << a << " is a character" << endl;
        }
};

template <>
class Value<double> {
    public:
        Value(double a){
            cout << a << " is a Double" << endl;
        }
};

int main(){

    Value<int> v1(5);
    Value<char> v2('a');
    Value<double> v3(6.7);
    return 0;
}