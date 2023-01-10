#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int x,y,z,c,b,d,m,n,h;
cout<<"enter your year of birth: "<<endl;
cin>>x;
cout<<"enter yor month of birth: "<<endl;
cin>>y;
cout<<"enter the day of birth: "<<endl;
cin>>z;
//comparing_dates
cout<<"enter the present year: "<<endl;
cin>>c;
cout<<"enter the peresnt month: "<<endl;
cin>>b;
cout<<"enter the peresnt day: "<<endl;
cin>>d;
//caculating_dates
m=(c-x);
n=(y-b);
h=(z-d);
cout<<"this much time have past your life "<<m<<"years "<<n<<"months "<<h<<"days"<<endl;
return 0;
}