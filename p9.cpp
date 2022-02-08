#include <iostream>
using namespace std;
int main()
{
	int num1 {0};
    int num2 {0};
    int num3 {0};
    int sum {0};
    double avg {0.0};
    const int total {3};
    cout <<"enter 3 intezers";
    cin>>num1;
    cin>>num2;
    cin>>num3;
    sum = num1 + num2 + num3;
    avg = static_cast<double> (sum) / total;
    cout <<"sum of the no. is : "<<sum <<endl;
    cout<<"average is : "<<avg<<endl;
    
	return 0;
}
