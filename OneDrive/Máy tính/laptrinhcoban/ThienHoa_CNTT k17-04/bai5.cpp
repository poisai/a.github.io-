#include<iostream>
using namespace std;
int main ()
{
	float p=2.500;
	float t=0.04;
	cout<<"muc phi trong 6 nam toi:\n";
	for(int i=1;i<=6;i++){
		p+=p*t;
		cout<<"nam:"<<i<<"phi trong nam:"<<p<<endl;
	}
	
	return 0;
}

