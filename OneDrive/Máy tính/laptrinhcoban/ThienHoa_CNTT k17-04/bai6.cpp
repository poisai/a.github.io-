#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int TG,sogio;
	float vantoc,kc;
	cout<<"van toc cua chiec xe:"<<endl;
	cin>>vantoc;
	cout<<"thoi gian di chuyen:"<<endl;
	cin>>TG;
	while(TG<0||vantoc<0){
		cout<<"so  gio di chuyen hoac van toc sai"<<endl;
		cout<<"nhap lai so gio di chuyen:"<<endl;
		cin>>TG;
		cout<<"nhap lai van toc cua xe:"<<endl;
		cin>>vantoc;
		return 1;
	}
	cout<<"khoan cach xe di duoc"<<endl;
	cout<<"_____________________"<<endl;
	for(sogio=0;sogio<=TG;sogio++){
		kc=vantoc*sogio;
		cout<<"so gio:"<<sogio<<setw(25)<<"quang duong di chuyen:"<<kc<<endl;
	}
	return 0;
	
	}
	
