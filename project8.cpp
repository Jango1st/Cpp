#include <iostream>
using namespace std;
int main()
{
	int m,n,c,h;
	cout<<"\n enter the time in second: ";
	cin>>m;
	n=m/3600;
	c=(m%3600)/60;
	h=(m%3600)%60;
	cout<<"\n the match tooked "<<n<<"houers "<<c<<"minuts "<<h<<"seconds";
	return 0;
}