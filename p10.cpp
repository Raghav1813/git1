#include <iostream>
using namespace std;
int main()
{
	bool result {false};
    int num1 {100};
    int num2 {50 + 50};
    result = (num1 == num2);
    result = (num1 != num2);
    cout << (num1 == num2)<<endl;
    cout<< std::boolalpha;
    cout<< (num1 == num2)<<endl;
     cout<< std::noboolalpha;
    cout << (num1 != num2)<<endl;
    cout<< std::boolalpha;
    cout<< (num1 != num2)<<endl;
     cout<< std::noboolalpha;
	return 0;
}
