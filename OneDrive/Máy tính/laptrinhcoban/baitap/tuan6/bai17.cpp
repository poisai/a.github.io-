#include <iostream>
using namespace std;

void danso(int sodan, float tylesinh, float tyletu, int sonam, int nambatdau)
{
    int i;
    for (i = nambatdau; i <= sonam; i++)
    {
        sodan = sodan + tylesinh * sodan - tyletu * sodan;
        cout << "So dan nam " << i + 1 << ": " << sodan << " Nguoi." << endl;
    }
}

int main()
{
    int sodan, sonam, nambatdau;
    float tylesinh, tyletu;
    
    do
    {
        cout << "Tong so dan nam bat dau tinh: ";
        cin >> sodan;
        if (sodan < 0)
        {
            cout << "Khong chap nhan gia tri am! Hay nhap lai." << endl;
        }
    } while (sodan < 0);
    
    do
    {
        cout << "Nhap vao ty le sinh hang nam (%): ";
        cin >> tylesinh;
        cout << "Nhap vao ty le tu hang nam (%): ";
        cin >> tyletu;
        if (tylesinh < 0 || tyletu < 0 || tylesinh > 100 || tyletu > 100)
        {
            cout << "Hay nhap vao ty le chinh xac (0-100%)." << endl;
        }
    } while (tylesinh < 0 || tyletu < 0 || tylesinh > 100 || tyletu > 100);
    
    do
    {
        cout << "Nhap vao so nam can hien thi: ";
        cin >> sonam;
        if (sonam < 0)
        {
            cout << "Khong chap nhan gia tri am! Hay nhap lai." << endl;
        }
    } while (sonam < 0);
    
    danso(sodan, tylesinh, tyletu, sonam, nambatdau);
    
    return 0;
}
