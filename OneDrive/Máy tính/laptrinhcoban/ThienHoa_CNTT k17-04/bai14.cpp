#include<iostream>
#include<string>
using namespace std;
int main()
{
	int slghocsinh;
	int i=1;
	do
	{
		cout<<"nhap so luong hoc sinh (1->25)"<<endl;
		cin>>slghocsinh;
		if(slghocsinh<1||slghocsinh>25){
			cout<<"nhap sai! nhap lai so luong:"<<endl;
			cin>>slghocsinh;
		}
	} 
	while(slghocsinh<=1||slghocsinh>=25);
	string ten,tendau="Z",tencuoi="A";
	while(i<slghocsinh){
		cout<<"nhap vao ten cua hoc sinh"<<i<<endl;
		cin>>ten;
		i++;
		if(ten.substr(0.1)>tencuoi.substr(0.1))
		{
			tencuoi=ten;
		}
		if(ten.substr(0.1)>tendau.substr(0.1))
		{
			tendau=ten;
		}
	}
	cout<<tendau; 
	
}
