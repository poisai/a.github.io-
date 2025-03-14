#include<iostream>
#include<cstdlib>
using namespace std ;
int main ()
{
	int num1,num2,tong,tich,thuong,hieu,luachon;
	num1=rand();
	num2=rand();
	cout<<"so1:"<<num1<<endl;
	cout<<"so2:"<<num2<<endl;
	while(true){
		cout<<"~~~~~~~~~~-MENU-~~~~~~~~~~"<<endl;
		cout<<"           tong"<<endl;
		cout<<"           hieu"<<endl;
		cout<<"           thuong"<<endl;
		cout<<"           tich"<<endl;
		cout<<"moi ban chon phep tinh: 1->5 :";
		cin>>luachon;
		if (luachon>5){
			cout<<"loi vui long chon lai:"<<endl;
		}
		
		
		switch(luachon){
			case 1:{
				tong=num1+num2;
				cout<<"tong hai so tren la:"<<tong<<endl;
				break;
			}
			case 2:{
			
				hieu=num1-num2;
				cout<<"hieu 2 so tren la:"<<hieu<<endl;
				break ;
			}
			case 3:{
				thuong=num1/num2;
				cout<<"thuong hai so tren la:"<<thuong<<endl;
				break;
			}
			case 4:{
				tich=num1*num2;
				cout<<"tich hai so tren la:"<<tich<<endl;
				break;
			}
			case 5:{
				cout<<"ban dang thoat "<<endl;
				break;
				return 1;
			}
					
		}
	
}
		return 0;
}
	
	

