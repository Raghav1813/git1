#include <iostream>
using namespace std;
int main()
{
	bool equal {false};
    bool not_equal {false};
    double num1{}, num2{};
    cout<<"Enter 2 intezers";
    cin>>num1>>num2;
    equal = (num1 == num2);
    not_equal = (num1 != num2);
    cout <<equal<<endl;
    cout<< std::boolalpha;
    cout<<equal<<endl;
     cout<< std::noboolalpha;
     cout << not_equal<<endl;
    cout<< std::boolalpha;
    cout<< not_equal<<endl;
     cout<< std::noboolalpha;
    
	return 0;
}
