#include <iostream>

using namespace std;

struct Point
{
    double x, y;
};

Point TrungDiem(const Point& p1, const Point& p2)
{
    Point M;
    M.x = (p1.x + p2.x) / 2;
    M.y = (p1.y + p2.y) / 2;
    return M;
}

int main()
{
    Point p1, p2;

    cout << "Toa do cua diem A la: ";
    cin >> p1.x >> p1.y;

    cout << "Toa do cua diem B la: ";
    cin >> p2.x >> p2.y;


    Point M = TrungDiem(p1, p2);
    cout << "Trung diem M cua doan thang AB la: ";
    cout << M.x << " " << M.y;
}
