#include <iostream>

using namespace std;

struct Point
{
    int x, y;
};

void TruyenThamTri(Point p, int X, int Y)
{
    p.x = X;
    p.y = Y;
}

void TruyenThamBien(Point &p, int X, int Y)
{
    p.x = X;
    p.y = Y;
}

int main()
{
    Point p;
    p.x = 1;
    p.y = 2;

    cout << "Truyen tham tri " <<endl;
    cout << "Truoc " << p.x << " " << p.y << endl;
    TruyenThamTri(p, 5, 6);
    cout << "Sau " << p.x << " " << p.y << endl;

    cout << "Truyen tham bien: " <<endl;
    cout << "Truoc " << p.x << " " << p.y << endl;
    TruyenThamBien(p, 7, 8);
    cout << "Sau " << p.x << " " << p.y;
}
// Khi truyen tham tri, gia tri cua bien p khong bi thay doi.
// Khi truyen tham bien, gia tri cua bien p bi thay doi va nhan gia tri cua tham so moi.
