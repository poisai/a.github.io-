#include <bits/stdc++.h>
using namespace std;


int main() 
{
    int sl;
    float gioLam;
    int dem=0;
    float tonggiolam;
    
    cin>>sl;
    for (int i=0; i<sl; i++)
    {
        cin>>giolam;
        tonggioLam+=giolam;
        if(gioLam<5)
        {
            dem++;
        }
    }
    cout<<tonggiolam<<endl;
    cout<<dem++;
       
    return 0;
}

