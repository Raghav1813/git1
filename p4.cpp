#include <iostream>
using namespace std;
int main()
{
	int x {110};
    int y {220};
    cout <<"addition of the number is : "<<x+y<<endl;
    cout<<"multiplication of number is : "<<x*y<<endl;
    int result {0};
    result = x/y;
    cout <<"division is : "<<result<<endl;
    result = y % x;
    cout <<" "<<result<<endl;
    x = 10;
    y = 3;
    result = x % y;
    cout <<" "<<result<<endl;
    result = y % x;
    cout <<" "<<result<<endl;
	return 0;
}
