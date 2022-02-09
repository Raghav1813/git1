#include <iostream>
using namespace std;
int main()
{
	int cent {};
    const double dollar {0.01};
    const double quatar {0.04};
    const double dime {0.1};
    const double nickel {0.2};
    const int penny {1};
    cout<<"enter an amount of cents : ";
    cin>>cent;
    cout <<"conversion of cents in dollar is : "<<cent*dollar<<endl;
    cout <<"conversion of cents in quatar is : "<<cent*quatar<<endl;
    cout <<"conversion of cents in dime is : "<<cent*dime<<endl;
    cout <<"conversion of cents in nickel is : "<<cent*nickel<<endl;
    cout <<"conversion of cents in penny is : "<<cent*penny<<endl;
	return 0;
}
