#include <iostream>
using namespace std;
int main()
{
	int cent {0};
    const int dollar_value {100};
    const int quatar_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    cout<<"enter an amount of cents : "<<endl;
    cin>>cent;
    int balance{};
    int dollar {};
    int quatar {};
    int dime {};
    int nickel {};
    int penny {};
    dollar = (cent/dollar_value);
    balance = cent - (dollar*dollar_value);
    quatar = (balance/quatar_value);
    balance = balance - (quatar*quatar_value);
    dime = (dime*dime_value);
    balance = balance - (dime*dime_value);
    nickel = (balance/nickel);
    balance = balance - (nickel*nickel_value);
    penny = balance;
    cout<<"dollars is/are : "<<dollar<<endl;
    cout<<"quatar is/are : "<<quatar<<endl;
    cout<<"dime is/are : "<<dime<<endl;
    cout<<"dnickel is/are : "<<nickel<<endl;
    cout<<"penny is/are : "<<penny<<endl;
	return 0;
}