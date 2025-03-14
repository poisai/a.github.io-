#include<iostream>
using namespace std;
int main()
{
	int sonam,nam ,thang ,lgmua;
	int sumlgmua=0;
	int lgmuaTB=0;
	cout<<"nhap so nam:";
	cin>>sonam;
	for(nam=1;nam<=sonam;	nam++){
		cout<<"nam:"<<nam<<endl;
		for(thang=1;thang<=12;thang++){
			do
			{
				cout<<"nhap vao luong mua thang "<<thang<<":"<<endl;
				cin>>lgmua; 
			}
			while(lgmua<0);
			sumlgmua+=lgmua;
			lgmuaTB=sumlgmua/(12*sonam);
		}
	}
	cout<<"so thang:"<<12*sonam<<endl;
	cout<<"tong luong mua:"<<sumlgmua<<endl;
	cout<<"luong mua trung binh moi thnag trong ki:"<<lgmuaTB ;
	return  0; 
	}

