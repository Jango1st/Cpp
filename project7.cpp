#include <iostream>
#include <cmath>
using namespace std;
//volume_surface_box
int main()
{
	float x,y,z,s,v;
	cout<<"\n enter the length(x) of the box in (cm):";//entery_length
	cin>>x;
	cout<<"\n enter the wide(y) of the box in (cm):";//entery_wide
	cin>>y;
	cout<<"\n enter the high of(z) the box in (cm):";//entery_high
	cin>>z;
	s=(4*(x*y))+(2*(y*z));//voulme
	v=(x*y*z);//surface
	cout<<"\n\n the surface of the box is :"<<s<<"cm2";
	cout<<"\n\n the volume of the box is :"<<v<<"cm3";
	return 0;
}