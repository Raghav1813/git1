#include <iostream>
using namespace std;
int main()
{
	int cent {};
    const int dollar_value {100};
    const int quatar_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    const int penny_value {1};
    cout<<"enter an amount of cents : ";
    cin>>cent;
    int balance{}, dollar{}, quatar{}, dime{}, nickel{}, penny{};
    dollar = (cent/dollar_value);
    balance = cent - (dollar*dollar_value);
    quatar = (balance/quatar_value);
    balance -= (quatar*quatar_value);
    dime = (balance/dime_value);
    balance -= (dime*dime_value);
    nickel = (balance/nickel);
    balance -= (nickel*nickel_value);
    penny = balance;
    cout<<"dollars is/are : "<<dollar<<endl;
    cout<<"quatar is/are : "<<quatar<<endl;
    cout<<"dime is/are : "<<dime<<endl;
    cout<<"dnickel is/are : "<<nickel<<endl;
    cout<<"penny is/are : "<<penny<<endl;
	return 0;
}
