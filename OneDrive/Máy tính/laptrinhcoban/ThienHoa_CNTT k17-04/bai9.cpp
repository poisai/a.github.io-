#include<iostream>
using namespace std;
int main ()
{
	float sotang,sp,pc,pk,tongpc;
	cout<<"so tang cua khach san :"<<endl;
	cin>>sotang;
	if(sotang<1){
		cout<<"tang khong hop le:"<<endl;
		cin>>sotang;
		return 2;
	}
	int sophong=0;
	 pc=0;
	for (int tang=1;tang<=sotang;++tang){
		if (tang==13){
			continue;
		}
		sp;
		cout<<"nhap so luong phong cua tang "<<tang<<":"<<endl;
		cin>>sp;
		
		while(sp<10){
			cout<<"so phong khong hop le :"<<endl;
			cin>>sp;
			return 1;
		}
	    pc;
		cout<<"so phong co khach "<<tang<<":"<<endl;
		cin>>pc;
		sophong+=sp;
		int tongpc=pc++;
	}
	 pk=sp-pc;
	double tlphongconguoi=(static_cast<double>(tongpc++) / sp) * 100;
	cout<<"so phong trong khach san:"<<sp++<<endl;
	cout<<"so phong dang co khach :"<<tongpc++<<endl;
	cout<<"so phong chua co khach:"<<sp++-tongpc<<endl;
	cout<<"ty le phong co nguoi:"<<tlphongconguoi;
	return 0;
	
}
