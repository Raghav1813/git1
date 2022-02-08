#include <iostream>
using namespace std;
int main()
{
	int total_amount {1999};
    int total_number {8};
    double avg {0.0};
    avg = total_amount / total_number;
    cout <<avg<<endl;
    avg = static_cast<double>(total_amount) / total_number;
    cout<<avg<<endl;
	return 0;
}
