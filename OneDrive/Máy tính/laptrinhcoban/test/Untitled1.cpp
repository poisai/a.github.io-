#include<iostream>
using namespace std;
int main ()
{
	int thang;
	cout<<"nhap thang: ";
	cin>>thang;
	if(thang>=3&&thang<=5)
	{
		cout<<"xuan";
	}
	else if(thang>=6&&thang<=8)
	{
		cout<<"ha";
	}
	else if(thang>=9&&thang<+11)
	{
		cout<<"thu";
	}
	else if(thang>=12&&thang<=2)
	{
		cout<<"dong";
	}
	return 0;
}
