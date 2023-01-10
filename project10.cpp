#include <iostream>
using namespace std;
int main()
{
	string first,last;
	int a,b,c;
	cout<<"enter youre first name: ";
	cin>>first;
	cout<<"enter youre last name: ";
	cin>>last;
	cout<<"\n hello "<<first<<" "<<last;
	cout<<"\n your name has "<<first.length()+last.length()<<" charectors";
	cout<<"\n we wellcome you "<<first<<" "<<last;
	return 0;                  
}