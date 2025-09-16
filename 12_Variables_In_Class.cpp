#include <iostream>

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