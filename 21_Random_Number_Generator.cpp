#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    // srand(41);
    srand(time(0)); //january 1 , 1970 , 00:00:00 UTC.
    for (int i = 0; i < 10; i++){
        cout << (rand() % 6) + 1 << endl;
    }


    return 0;
}