#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    double m = 0.0;
    double tl = 1.5;

    cout << "Nam/ muc nuoc bien (mm)" << endl;
    for (int i = 1; i <= 25; i++) {
        m +=tl;
    	cout << "nam"<<i<<setw(15)<<" muc nuoc tang: " << m << endl;
    }

    return 0;
}
