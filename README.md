# C++

## 1.Hello World
<pre>
#include &lt;iostream&gt;
using namespace std;

int main(){
    cout << "Hello World!";
    // << this is called stream insertion operator
    return 0;
}
</pre>

## 2.Comments
<pre>
#include &lt;iostream&gt;

using namespace std;

int main(){
    // print something
    cout << "Hello World!";
    return 0;
}
</pre>

## 3.Printing Text
<pre>
#include &lt;iostream&gt;

using namespace std;

int main(){
    cout << "Hello World!" << endl;
    cout << "Goodbye , World";
    return 0;
}
</pre>

## 4.Variable
<pre>
#include &lt;iostream&gt;

using namespace std;

int main(){

    int x = 5;
    int y = x + 1;
    cout <<"X = " << x << endl;
    cout << y;
    return 0;
}
</pre>

## 5.Calculator
<pre>
#include &lt;iostream&gt;

using namespace std;

int main(){

    int x;
    int y;
    
    cout << "Enter x value : ";

    cin >> x;

    cout << "Enter y value : ";

    cin >> y ;

    cout << "sum of x+y " << x + y;
    
    return 0;
}
</pre>

## 6.Arithmetic_Operations
<pre>
#include &lt;iostream&gt;

using namespace std;

int main(){

    // BODMAS
    int x = (4 + 3) * (5 + 4);


    cout << x;

    return 0;
}
</pre>

## 7.If_Else
<pre>
#include &lt;iostream&gt;

using namespace std;

int main(){

    int a = 21;

    int b = 9;

    if(a > b){
        if(a!=0){
            a = 0;
        }
    }

    if (a == 0)    {
        cout << "A is greater then B" << endl;
    }else{
        cout << "B is greater then A" << endl;
    }

    // or
    int x = 5, y = 10;
    cout << ((x > y) ? "x is greater":  "Y is greater") << endl;
    


    return 0;
}
</pre>

## 8.Function
<pre>
#include &lt;iostream&gt;

using namespace std;

void Print_HelloWorld(){
    cout << "Hello World!";
}

int addition(int a,int b){
    return a+b;
}

int print_some_Operation(int x,int y){
    int a = x;
    int b = y;
    cout << "A * B = " << x*y;
}

void fun();

int main(){ 

    Print_HelloWorld();
    cout << endl;
    print_some_Operation(2,2);
    cout << endl;
    cout << "A + B = " << addition(3,7);
    cout << endl;
    fun();
    return 0;
}

void fun(){
    cout << "hello";
}
</pre>

## 9.Passing_Valus_to_Functions
<pre>
#include &lt;iostream&gt;

using namespace std;


void PrintThisNumber(int n) {
    cout << "Number is: " << n;
    cout << endl;
}

int main(){

    PrintThisNumber(9);
    return 0;
}
</pre>

## 10.Function_with_Arguments
<pre>
#include &lt;iostream&gt;

using namespace std;


void PrintThisNumber(int n) {
    cout << "Number is: " << n;
    cout << endl;
}

int printMultipleNumber(int a,int b,int c){
    cout << "a is " << a << endl << " b is " << b << endl  << " c is " << c << endl;
    return a+b+c;
}

int print_Addition(int a=0,int b=0,int c=0,int d=0){

    cout << "Addition of Arguments is  " << a+b+c+d;
}

int main(){

    PrintThisNumber(9);

    printMultipleNumber(2,3,4);

    cout << printMultipleNumber(3,4,5);

    cout << endl;
    print_Addition(1,5,0,2);
    return 0;
}
</pre>

## 11.Classes_Objects
<pre>
#include &lt;iostream&gt;

using namespace std;

class ACalss{
    public:
        void printHello(){
                cout << "Hello";
        }
};

int main(){

    ACalss obj;
    obj.printHello();
    return 0;
}
</pre>

## 12.Variables_In_Class
<pre>
#include &lt;iostream&gt;

using namespace std;

class Shop{

    private:
        int money=0;

    public:
        void modifyMoney(){
            money = money + 5;
        }

        int getMoney(){
            return money;
        }
    
};

int main(){

    Shop s;
    s.modifyMoney();
    cout << s.getMoney();
    
    return 0;
}
</pre>

## 13.Constructor
<pre>
#include &lt;iostream&gt;

using namespace std;

class Shop{

    private:
        int money;

    public:
        Shop(int m){
            money = m;
        }
        void modifyMoney(){
            money += 5;
        }

        int getMoney(){
            return money;
        }
    
};

int main(){

    int money;
    
    cout << "Enter The Amount of you purched: ";
    cin >> money;

    Shop s(money);

    s.modifyMoney();

    

    cout << s.getMoney();
    
    return 0;
}
</pre>

## 14.While_Loop
<pre>
#include &lt;iostream&gt;

using namespace std;

int main(){

    int number = 3;
    while(number <= 10){
        cout << number << endl;
        number += 3;
    }

    return 0;
}
</pre>

## 15.For_Loop
<pre>
#include &lt;iostream&gt;

using namespace std;

int main(){

    for(int i=1; i<=10; i++){

        cout << i << endl;
    }

    return 0;
}
</pre>

## 16.Assignment_Increment_operators
<pre>
#include &lt;iostream&gt;

using namespace std;

int main(){

    int val = 5;
    cout <<"value : " << val << endl;

    cout << "----- Increment Operators ----- " << endl;

    val = 5;
    ++val;
    cout << "Pre Increment " << val << endl;

    val = 5;
    val++;
    cout << "Post Increment " << val << endl << endl;

    cout << "----- Decrement Operators -----" << endl;
    
    val = 5;
    val--;
    cout << "Post Decrement " << val << endl;

    val = 5;
    --val;
    cout << "Pre Decrement " << val << endl << endl;

    val = 5;
    cout << "val is : " << val++ <<". if val++ now val is "<< val << endl;
    val = 5;
    cout << "val is : " << val-- <<". if val-- now val is "<< val << endl;

    val = 5;
    cout << "val is : " << ++val << endl;
    val = 5;
    cout << "val is : " << --val << endl;
    return 0;
}
</pre>

## 17.Data_Types
<pre>
#include &lt;iostream&gt;

using namespace std;

int main(){

    int a = 5;
    float b = 2.5;
    double c = 4.5;


    cout << "a = " << a << " b = " << b << " c = " << c;
    
    char d = '`';

    cout << endl << d << endl;

    string str = "hello, world! 35./$%&#";
    cout << str;

    return 0;
}
</pre>

## 18.Do_while_Loops
<pre>
#include &lt;iostream&gt;

using namespace std;

int main(){

    int x = 1;

    do{
        cout << x << endl;
        x++;
    }while (x <= 10);
    
}
</pre>

## 19.Switch_Statement
<pre>
#include &lt;iostream&gt;

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
</pre>

## 20.Logical_Operators
<pre>
#include &lt;iostream&gt;

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
</pre>

## 21.Random_Number_Generator
<pre>
#include &lt;iostream&gt;
#include &lt;cstdlib&gt;
#include &lt;ctime&gt;

using namespace std;

int main(){

    // srand(41);
    srand(time(0)); //january 1 , 1970 , 00:00:00 UTC.
    for (int i = 0; i < 10; i++){
        cout << (rand() % 6) + 1 << endl;
    }


    return 0;
}
</pre>

## 22.Default_Arguments_or_Parameters
<pre>
#include &lt;iostream&gt;

using namespace std;

int multiply3(int a=1,int b=1, int c=1){
    return a*b*c;
}

int main(){

    cout << multiply3(24,1);
    return 0;
}

</pre>

## 23.Unary_Scope_resolution_operator
<pre>
#include &lt;iostream&gt;

using namespace std;

double x = 3;
int main(){

    int x = 2;
    cout << x << endl;
    cout << ::x + x<< endl;

    return 0;
}
</pre>

## 24.Function_Overloading
<pre>
#include &lt;iostream&gt;

using namespace std;

void printTypeAndValue(int x){
    cout << "Integer : " << x << endl;
}
 
void printTypeAndValue(float y){
    cout << "Decimal : " << y << endl;
}


int main(){

    int a = 2;
    float b = 4; 
    int c = 3;
    float d = 1;



    printTypeAndValue(a);
    printTypeAndValue(b);
    printTypeAndValue(c);
    printTypeAndValue(d);



    return 0;
}
</pre>

## 25.Recursion
<pre>
#include &lt;iostream&gt;

using namespace std;


int factorial(int number){
    cout << "Step : " << number  <<" * " << number-1 << endl;
    if (number == 1)
        return 1;
    else
        return number * factorial(number - 1);
}

int main(){

    cout << "Factorial is : " <<  factorial(5);

    return 0;
}
</pre>

## 26.Arrays 
<pre>
#include &lt;iostream&gt;

using namespace std;

int main(){

    int a[5] = {2,3,4,5,6};

    cout << a[3];

    return 0;
}
</pre>

## 27.Array_using_forLoop 
<pre>
#include &lt;iostream&gt;
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
</pre>

## 28.Arrays_As_function_parameters
<pre>
#include &lt;iostream&gt;

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
</pre>

## 29.2D_Arrays_Matrix.cpp
<pre>
#include &lt;iostream&gt;

using namespace std;

int main(){

    int a[5][5] = {{1,2,3,4,5},{6,7,8,9,10}};

    cout << a[1][4];

    return 0;
}
</pre>

## 30.Pointers
<pre>
#include &lt;iostream&gt;

using namespace std;

int main(){

    int a = 4;
    int b = 6;
    float c = 4.1;
    double d = 9.1;
    char str = 'w';

    int *ptr = &a;
    int *ptr1 = &b;
    float *ptr2 = &c;
    double *ptr3 = &d;
    char * ptr4 = &str;
    cout << ptr << endl << ptr1 << endl << ptr2 << endl << ptr3 << endl << ptr4 << endl;

    return 0; 

}
</pre>

## 31.PassBy_Reference
<pre>
#include &lt;iostream&gt;

using namespace std;

void passByValue(int a){
    cout << "This function is only change value not the variable's address value" << endl;
    cout << a << endl;
    a = 45;
    cout << a << endl;
    // address 1 - 10(x)
    // address 2 - 45(a) 
    // pass by value is create a new memory space and store value
}

void passByReference(int * a){
    cout << "This function is change address's value" << endl;
    cout << *a << endl;
    *a = 45; // this * indicates value of a's address
    cout << *a;
    // address 1 - 10(x)
    // address 2 - (address of x value) address 1 (*a) change into 45(x) 
}

int main(){
    int x = 10;
    passByValue(x);
    passByReference(&x);
    return 0;

}
</pre>

## 32.SizeOf
<pre>
#include &lt;iostream&gt;

using namespace std;

int main(){

    int a = 5;
    char b ='c';
    double c = 5;

    int d[5];

    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;

    return 0;
}


// bytes = 8 bits 
// int - 4 bytes
// char - 1 byte
// double - 8 bytes
// array - 20 bytes 
</pre>

## 33.Pointer_Arithmetic
<pre>
#include &lt;iostream&gt;

using namespace std;

int main(){

    int a[3];

    int * p = &a[1];
    int * p1 = &a[2];
    int * p2 = &a[3];

    cout << p << endl;
    cout << p1 << endl;
    cout << p2 << endl;

    p1 +2;
    cout << p1 << endl;

    return 0;
}
// bytes = 8 bits 
// int - 4 bytes
// char - 1 byte
// double - 8 bytes
// array - 20 bytes 
</pre>

## 34.Arrow_Selection_Operator
<pre>
#include &lt;iostream&gt;

using namespace std;

class Example{
    public:
        int number;
        Example(int n,int m){
            number = n + m;
        }
        void printHello(){
            cout << "Hello " << endl;
        }
        int printnumber(){
            cout << "The number is " << number << endl;
        }
};

int main(){

    Example object(2,8);

    Example* pointer = &object;

    pointer->printHello(); //-> this is arrow selection operator . this is call by pointer

    pointer->printnumber();

    return 0;
}
</pre>

## 35.Deconstructor
<pre>
#include &lt;iostream&gt;

using namespace std;

class Example{
    public:
        Example(){
            cout << "Constructor" << endl;
        }
        ~Example(){
            cout << "Deconstructor" << endl;
        }
};

int main(){

    Example object;

    cout << "Main" << endl;


    return 0;
}
</pre>

## 36.Const_Objects
<pre>
#include &lt;iostream&gt;

using namespace std;

class Example{
    int a;
    
    public:
        Example(){
            a = 1;
        }

        void changeA(){
            a = 5;
        }

        void printA() const {
            cout << a << endl;
        }
};

int main(){

    Example object;
    object.printA();

    object.changeA();

    object.printA();

    // const Example o;
    // o.changeA();

    return 0;
}
</pre>

## 37.Member_Intializer_List
<pre>
#include &lt;iostream&gt;

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
</pre>

## 38.Class_Composition
<pre>
#include &lt;iostream&gt;
#include &lt;string&gt;

using namespace std;

class Birthday{

    int day;
    int month;
    int year;

    public:
        Birthday(int d, int m, int y){
            day = d;
            month = m;
            year = y;
        }

        void printDateOfBirth(){
            cout << "DOB  : " << day << "/" << month << "/" << year << endl;
        }
};

class Person{

    string name;
    Birthday bday;

    public:
        // bday variable is store b's value and if calss is used to another class we develop member intializer list.we con't able to store the b value into bday using constructor.

        /* Person(string s,Birthday b) { 
            name = s;
            bday = b;     ------ we can't able to give like this ------
        } */

        // if we use another class object into a class ,if we get a object in a constructor ,we con't able to assign into constructor.so we always use member intializer list. ---- || ---- if we want use in another class object into one class we get in constructor and con't able to assign so give only member intializer list and pass object.
 
        Person(string s,Birthday b): bday(b) { 
            name = s;
            // bday = b;
        }

        void printPersonData(){
            cout << "Name : " << name << endl; 
            bday.printDateOfBirth();
        }
};

int main(){

    Birthday b(03,10,2003);

    Person p("dhanush",b);
    p.printPersonData();

    return 0;
}
</pre>

## 39.Friend_Function
<pre>
#include &lt;iostream&gt;

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
</pre>

## 40.This_Keyword
<pre>
#include &lt;iostream&gt;

using namespace std;

class Example{

    int a;

    public:
        Example(){
            a = 1;
        }

        void printA(){
            cout << "a = " << a << endl;
            cout << "this->a = " << this->a << endl; // -this keyword is use in classes, it is pointer -this keyword is store e object address. so it's show a's value | arrow operator
            cout << "(*this).a = " << (*this).a << endl; // this is going to pointers address and take the address value | dot operator
        }

};


int main(){

    // this keyword is use in classes

    Example e;
    e.printA();

   return 0;
}
</pre>

## 41.Operator_Overloading
<pre>
#include &lt;iostream&gt;

using namespace std;

class Number{
    int number;
    
    public:
        Number(){} //this is empty constructor number is 0

        Number(int d){
            number = d;
            cout <<"D : " << d << endl;
        }

        Number operator+(Number x){
            Number newNumber; // temp obj
            cout <<"number : " << number << endl; 
            cout <<"x.number : " << x.number << endl;
            
            cout << number <<" + " << x.number << endl;
            newNumber.number = number + x.number;
            
            return newNumber;
        }

        void printNumber(){
            cout <<"number : " << number << endl;
        }


};

int main(){

    // int a = 4;
    // int b = 5;

    Number a(4);
    Number b(5);

    Number c = a + b; //a.operator+(b)

    c.printNumber();

    return 0;
}
</pre>

## 42.Inheritance
<pre>
#include &lt;iostream&gt;

using namespace std;

class Human{
    string name = "Dhoni";
    public:
        void printName(){
            cout << "Name : " << name << endl;
        }
};

class Dhoni : public Human{};

int main(){

    Dhoni dhoni;
    dhoni.printName();
    return 0;
}
</pre>

## 43.Protected_Access_Specifier
<pre>
#include &lt;iostream&gt;

using namespace std;

class Human{
    private:
        int age;
    protected:
        int height = 123;
    public:
        string name = "Human name";
};

class Dhoni : public Human{
    public:
        void printValues(){
            //cout << age << endl; | not avalible this variable |
            cout << height << endl;
            cout << name << endl;
        }
};

int main(){

    Dhoni dhoni;
    dhoni.printValues();
    return 0;
}
</pre>
## 44.Derived_Class_Constructor_Destructor
<pre>
#include &lt;iostream&gt;

using namespace std;

class Human{
    public:
        Human(){
            cout << "Human constructor" << endl; //1
        }
        ~Human(){
            cout << "Human destructor" << endl; //5
        }
};

class Dhoni : public Human{
    public:
        Dhoni(){
            cout << "Dhoni constructor" << endl; //2
        }
        ~Dhoni(){
            cout << "Dhoni destructor" << endl; //4
        }
};

int main(){
    Dhoni dhoni;
    cout << "Main function" << endl; // 3
    return 0;
}
</pre>

## 45.Polymorphism
<pre>
#include &lt;iostream&gt;

using namespace std;

class Batsman {
    protected:
        int runs;
    
    public: 
        void setRuns(int r){
            runs = r;
        }
};

class  Dhoni : public Batsman{
    public:
        void printRuns(){
            cout << "Dhoni scored: " << runs << endl;
        }
};

class  Kohli : public Batsman{
    public:
        void printRuns(){
            cout << "Kohli scored: " << runs << endl;
        }
};

class Kohil : public Batsman {

};

int main(){
    Dhoni dhoni;
    Kohli kohli;
    
    // we use two type of usecase for Batsman class.
    Batsman* batsman1 = &dhoni;
    Batsman* batsman2 = &kohli;

    batsman1->setRuns(10);
    batsman2->setRuns(12);

    dhoni.printRuns();
    kohli.printRuns();

    return 0;
}
</pre>

## 46.Virtual_PureVirtualFunctions
<pre>
#include &lt;iostream&gt;

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
</pre>

## 47.Template_Functions 
<pre>
#include &lt;iostream&gt;

using namespace std;

template &lt;class T&gt;

T add(T a, T b){
    return a + b;
}

int main(){

    int a = 5, b = 7;
    
    cout << add(a,b) << endl;

    double c = 5.5, d = 8.5;

    cout << add(c,d);


    return 0;
}
</pre>

## 48.Template_Functions_With_Multiple_Arguments
<pre>
#include &lt;iostream&gt;

using namespace std;

template &lt;class First, class Second&gt;

Second add(First a, Second b){
    return a+b;
}

int main(){

    int a = 5;
    double b = 7.5;

    cout << add(a,b);

    return 0;
}
</pre>

## 49.Class_Template
<pre>
#include &lt;iostream&gt;

using namespace std;

template &lt;class T&gt;

class Numbers {
    T first;
    T second;

    public:
        Numbers(T a,T b){
            first = a;
            second = b;
        }

        T larger(){
            if(first > second){
                return first;
            }
            return second;
        }
};

int main(){

    // Numbers<int> numbers(5,6);
    // cout << numbers.larger() << endl;
    Numbers<double> numbers(5.5,4);
    cout << numbers.larger() << endl;


    return 0;
}
</pre>

## 50.Template_Specialization
<pre>
#include &lt;iostream&gt;

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
</pre>

## 51.Try_Catch_Exception_Handling
<pre>
#include &lt;iostream&gt;

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
</pre>

## 52.Output_To_a_File
<pre>
#include &lt;iostream&gt;
#include &lt;fstream&gt;

using namespace std;

int main() {
    ofstream testFile;
    testFile.open("testFile.txt");

    testFile << "Testing Files" << endl;

    testFile.close();

    return 0;
}
</pre>

## 53.File_Open_Error 
<pre>
#include &lt;iostream&gt;
#include &lt;fstream&gt;

using namespace std;

int main(){

    ofstream testFile("testFile.txt");

    if(testFile.is_open()){
        testFile << "Testing Files" << endl;
    }else{
        cout << "File Open Error" << endl;
    }

    testFile.close();

    return 0;
}
</pre>

## 54.EOF_EndOfFile
<pre>
#include &lt;iostream&gt;
#include &lt;fstream&gt;

using namespace std;

int main(){

    ofstream numberFile("numbers.txt");

    int a;

    // EOF -> CTRL + anykey
    while(cin >> a){
        numberFile << "Number: " << a << endl;
    }
    
    return 0;
}
</pre>

## 55.Reading_From_File
<pre>
#include &lt;iostream&gt;
#include &lt;fstream&gt;
#include &lt;string&gt;

using namespace std;

int main(){
    
    ifstream numberFile("numbers.txt");
    string s;
    int a;

    while(numberFile >> s >> a){
        cout << s << a << endl;
    }


    return 0;
}
</pre>

## 56.String_Functions
<pre>
#include &lt;iostream&gt;

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
    cout << test << " ab is avilable at " << test.find("ab") << endl;
    cout << test << " ab is avilable at " << test.rfind("ab") << endl;


    return 0;
}
</pre>

### numbers.txt
<pre>
Number: 1
Number: 2
Number: 3
Number: 4
Number: 5
</pre>

### testFile.txt
<pre>
Testing Files
</pre>