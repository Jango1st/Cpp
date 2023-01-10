#include <iostream>
#include <cmath>
using namespace std;
//int_&_dec_of_gpu
int main()
{
	float (c),(y);
	double(x);
    cout<<"\n enter your GPA:";
    cin>>x;
    c=x-floor(x);
	y=x-(c);
    cout<<"\n the decimal of your GPU is "<<c;
    cout<<"\n the integer of your GPU is "<<y;
	return 0;
}                 