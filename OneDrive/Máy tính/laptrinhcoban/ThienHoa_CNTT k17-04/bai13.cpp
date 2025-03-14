#include<iostream>
using namespace std;
int main ()
{
	int soht,somax;
	int somin=-99;
	int so =0;
	cout<<"nhap cac so nguyen:"<<endl;
	cout<<"dung chuong trinh thi nhap so -99"<<endl;
	cout<<"__________________________________"<<endl;
	while(true){
	so++;
	cout<<"nhap vao so nguyen:"<<so<<":"<<endl;
	cin>>soht;
	if(soht==-99){
		somin=soht;
		break;
	}
	int somoi=soht;
	somax=max(somax,soht);
	somin=min(somin,soht);
}
cout<<"so lon nhat la:"<<somax<<endl;
cout<<"so be nhat la :"<<somin;
return 0;
	
}
