#include<iostream>
using namespace std;
int main()
{

int sl;
    float giolam;
    int dem=0;
    float TongGioLam;
    
    cin>>sl;
    for (int i=0; i<sl; i++)
    {
        cin>>giolam;
        TongGioLam+=giolam;
        if(giolam<5)
        {
            dem++;
        }
    }
    cout<<TongGioLam<<endl;
    cout<<dem++;
    return 0;
}
