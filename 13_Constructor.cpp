#include <iostream>

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