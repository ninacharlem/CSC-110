/*Program1.cpp*/
#include <iostream>

using namespace std;
//Nina Robichaud
//ATM Program 1

//Variables
float balance =1072.36;
float fee = 12.50;
string name;
int select;
float deposit;

int main()
{
    //getting name
    cout <<"1: Check Balance"<<endl;
    cout <<"2: Deposit"<<endl;
    cout <<"3 Transfer"<<endl;
    cout <<"4: Withdraw"<<end1;
    //Semantic issue for lines 18-21 " Use of undeclared identifier 'end1'; did you mean 'endl'? "
    //selection
    cin >> select;
    
    //switch statement
    switch (select)
    {
        case 1:
            balance = balance - fee;
            cout<<"your balance is $"<<balance<<end1;
            break;
        default: cout<<"invalid selection"<<end1;
    }
    else
        cout<<"invalid selection"<<end1;
    
    //calculate balance
    cout <<"net line of code"<<end1;
    //balance = balance - fee;
    cout << name <<", Your balance is:" << "$" << balance<< end1;
    return 0;
}
//Program has an issue with 'end1' variable
