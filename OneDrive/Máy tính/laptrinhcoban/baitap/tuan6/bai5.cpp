#include <iostream>
#include <iomanip>
using namespace std;

float fallingDistance(float tg)
{
	return (tg*tg*9.8)/2;
}
int main()
{
	float tg;
	for(tg=1; tg<=10; tg++)
	{
		cout<<"Thoi gian (s)"<<setw(15)<<"Khoang cach (m)"<<endl;
		cout<<tg<<setw(15)<<fallingDistance(tg)<<endl;
	}
	return 0;
}
