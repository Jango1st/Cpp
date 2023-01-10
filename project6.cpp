#include <iostream>
using namespace std;
//cost_caculator_after_5_years
int main()
{
//cost_house1	
    float x,y,z,c;
	cout<<"\n enter the tax rate for house 1 : ";
	cin>>x;
	cout<<"\n enter the intial cost of the house 1 : ";
	cin>>y;
	cout<<"\n enter the annual price of the fuel house 1 : ";
	cin>>z;
	c=5*((x*y)+z);
	cout<<"\n\t the total price of the house 1 in five years is:"<<c;
//cost_house2
	float x2,y2,z2,c2;
	cout<<"\n\n enter the tax rate for house 2 : ";
	cin>>x2;
	cout<<"\n enter the intial cost of the house 2 : ";
	cin>>y2;
	cout<<"\n enter the annual price of the fuel house 2 : ";
	cin>>z2;
	c2=5*((x2*y2)+z2);
	cout<<"\n\t the total price of the house 2 in five years is:"<<c2;
//cost_house3
	float x3,y3,z3,c3;
	cout<<"\n\n enter the tax rate for house 3 : ";
	cin>>x3;
	cout<<"\n enter the intial cost of the house 3 : ";
	cin>>y3;
	cout<<"\n enter the annual price of the fuel house 3 : ";
	cin>>z3;
	c3=5*((x3*y3)+z3);
	cout<<"\n\t the total price of the house 3 in five years is: "<<c3;
	return 0;
}