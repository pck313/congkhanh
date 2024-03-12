#include <iostream>
 using namespace std;

struct Point
{
    int x, y;
};

void thamso(Point p)
{
    cout << "Dia chi truyen tham so " << &p << endl;
}

void thamtri(Point& p)
{
    cout << "Dia chi truyen tham tri " << &p << endl;
}

int main()
{

    Point point;
    point.x = 10;
    point.y = 20;

    cout << "Dia chi p: " << &point << endl;

    cout << "Pass by value: " << endl;
    thamso (point);

    cout << "Pass by reference: " << endl;
    thamtri (point);

    return 0;
}
