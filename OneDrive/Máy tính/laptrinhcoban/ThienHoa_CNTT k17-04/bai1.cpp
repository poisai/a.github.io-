#include<iostream>
using namespace std;
int main1()
{
	int n,i,tong;
	cout<<"nhap so nguyen:";
	cin>>n;
	i=0;
	tong=0;
	while (i<n) {
		tong=tong+i;
		i++;
		
	}
	cout<<"tong la:"<<tong;
	return 0;
	
}
