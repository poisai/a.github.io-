#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int coinToss()
{
	int so=1+rand()%2;
	
	if (so==1)
	{
		cout<<"heads";
	}
	else if (so==2)
	{
		cout<<"tails";
	}
	return so;
}

int main()
{
	int solan, tails=0, heads=0, so;
	
	cout<<"Nhap vao so lan tung dong xu: ";
	cin>>solan;
	srand(time(0));
	for (int i=1; i<=solan; i++)
	{
		so=coinToss();
		cout<<endl;
		if (so==1)
		{
			heads++;
		}
		else if (so==2)
		{
			tails++;
		}
	}
	cout<<"_________________________"<<endl;
	cout<<"So lan heads: "<<heads<<endl;
	cout<<"So lan tails: "<<tails<<endl;
	return 0;
}
