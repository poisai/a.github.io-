#include <iostream>
#include <cmath>
using namespace std;

float presentValue(float tiennhan, float lainam, int sonam)
{
	lainam/=100;
	float tiengui=tiennhan/pow(1+lainam, sonam);
	return tiengui;
}

int main()
{
	float tiennhan, tiengui, lainam;
	int sonam;
	
	cout<<"Nhap vao so tien du kien nhan($): ";
	cin>>tiennhan;
	cout<<"Nhap vao lai suat nam (%): ";
	cin>>lainam;
	cout<<"Nhap vao so nam du kien gui: ";
	cin>>sonam;
	cout<<"So tien du kien phai gui la ($): "<<presentValue(tiennhan, lainam, sonam);
}
