#include<iostream>
#include<string> 
using namespace std;
 int main()
 {
string manv;
float sumluong,thuetb,thuelb,sumthue,thuetn;
while(true){

cout<<"nhap ma nhan vien:(nhap 0 de ket thuc)"<<endl;
cin>>manv;
if(manv=="0"){
	break;
}	 
do
{
	cout<<"tong luong:"<<endl;
	cin>>sumluong;
	cout<<"theu tieu bang:"<<endl;
	cin>>thuetb;
	cout<<"thue lien bang:"<<endl;
	cin>>thuelb;
	cout<<"theu thu nhap:"<<endl;
	cin>>thuetn;
	sumthue=thuetb+thuelb+thuetn;
	if(sumluong<0||thuetb<0||thuelb<0||thuetn<0||sumluong<sumthue){
		cout<<"loi! xin nhap lai:"<<manv<<endl;
		
	}
}
while(sumluong<0||thuetb<0||thuelb<0||thuetn<0||sumluong<sumthue);
cout<<"tong luong:"<<sumluong<<"  $"<<endl;
cout<<"theu tieu bang:"<<thuetb<<"$"<<endl;
cout<<"theu lien bang:"<<thuelb<<"$"<<endl;
cout<<"theu thu nhap:"<<thuetn<<" $"<<endl;
cout<<"tien luong thu duoc:"<<sumluong-sumthue<<"$"<<endl;
}
return 0;
  } 
 
