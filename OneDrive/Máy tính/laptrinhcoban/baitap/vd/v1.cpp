#include <iostream>
using namespace std;


int main() 
{
   int songuyen;
    cout<<"nhap so nguyen bat ki";
    cin>>songuyen;
    if(songuyen%2==0&&songuyen%3==0)
    {
        cout<<"2,3";
    }    
	else if(songuyen%2==0)
    {
        cout<<"2";
    }
    else if(songuyen%3==0)
    {
        cout<<"3";
    }
    else if (songuyen/2!=0&&songuyen/3!=0)
    {
        cout<<"0";
    }
    return 0;
}
