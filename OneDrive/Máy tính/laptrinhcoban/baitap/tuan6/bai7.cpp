#include <iostream>
#include <iomanip>
using namespace std;

float celsius(float DoF)
{
	return (5*(DoF-32)/9);
}
int main()
{
	float DoF;
	
	for (DoF=0; DoF<=20; DoF++)
	{
		cout<<"Do F"<<setw(20)<<"Do C"<<endl;
		cout<<DoF<<setw(21)<<fixed<<setprecision(2)<<celsius(DoF)<<endl;
	}
	return 0;
}
