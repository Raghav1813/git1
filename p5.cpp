#include <iostream>
using namespace std;
int main()
{
	const double usd_per_ur {1.19};
    cout <<"welcome to usd converter"<<endl;
    cout <<"enter the value in euro : ";
    double euro {0.0};
    double usd {0.0};
    cin>>euro;
    usd = euro*usd_per_ur;
    cout <<"euro is equal to : "<<usd<<"$"<<endl;
	return 0;
}
