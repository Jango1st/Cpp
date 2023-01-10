#include <iostream>
using namespace std;
#include <cmath>
void triangle();
void circle();
void rectangle();
void line();

int main()
{
	circle();
	triangle();
	rectangle();
	line();
	line();
	triangle();
	circle();
	rectangle();
	return 0;
}
void triangle()
{
//triangle
cout<<"\n     /\\      ";
cout<<"\n    /__\\     ";
}
void circle()
{
//circle
cout<<"\n    ****       ";
cout<<"\n   *    *      ";
cout<<"\n    ****       ";
}
void rectangle()
{
//rectangle	
cout<<"\n   ________    ";
cout<<"\n  |        |   ";
cout<<"\n  |________|    ";
}
void line()
{
cout<<"\n               ";
}
