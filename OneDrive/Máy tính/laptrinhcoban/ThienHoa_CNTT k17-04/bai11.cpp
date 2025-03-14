#include<iostream>
using namespace std;
int main ()
{
	int slgbandau,songay,ngay,slgiun;
	float tangtbngay;
	cout<<"so luong sinh vat ban dau:"<<endl;
	cin>>slgbandau;
	while(slgbandau<2){
	
	cout<<"khong chap nhan so luong! nhap lai: ";
	cin>>slgbandau;
}
	cout<<"muc tang trung binh hang ngay(%)"<<endl;
	cin>>tangtbngay;
	while(tangtbngay<0){
		cout<<"khong chap nhan so ngay be hon ko ! nhap lai:";
		cin>>tangtbngay;
	}
	cout<<"so ngay sinh vat sinh san:"<<endl;
	cin>>songay;
	while(songay<0){
		cout<<"khong chap nhan so ngay nho hon 1! nhap lai:";
		cin>>songay;
	}
	for(ngay=1;ngay<=songay;ngay++){
		slgbandau=slgbandau+slgbandau*(tangtbngay/100);
		cout<<"so luong sinh vat sau: "<<ngay<<" la:"<<slgbandau<<endl;
	}
	return 0;
 } 
