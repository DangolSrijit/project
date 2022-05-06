#include<iostream.h>
using namespace std;
struct phone 
{
	int area;
	int exchange;
	int number;
};
int main()
{ 
	phone P[2];
	int i;
	for(i=0;i<=1;i++)
	{
		cout<<"enter first three number=";
		cin>>P[i].area;
		cout<<"enter second three number=";
		cin>>P[i].exchange;
		cout<<"enter last four number=";
		cin>>P[i].number;
	}
	for(i=0;i<=1;i++0)
	{
		cout<<"the"<<i<<"number is "<<p[i].area<<" "<<p[i].exchange<<" "<<P[i].number<<" "endl;

	}
	return 0;
}
