#include <iostream>
using namespace std;
int main()
{
    cout<<boolalpha;
	bool result {false};
    int num {};
    const int lower {20};
    const int upper {100};
    cout<<"enter a number between "<<lower<<" and "<<upper<<" : ";
    cin>>num;
    result = (num<=lower || num>=upper);
    cout<<"result is "<<result<<endl;
    return 0;
}
