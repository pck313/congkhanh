#include <iostream>
using namespace std;
struct Point
{
    int x, y;
};

struct Rect
{
    int x, y;
    int w, h;

    bool contains(const Point& point) const {
        return (point.x >= x && point.x <= x + w && point.y >= y && point.y <= y + h);
    }
};

int main()
{
    const Rect rect = {10, 20, 1, 15};
    Point point = {5, 23};
    if (rect.contains(point)) cout << "Diem nay nam trong hcn. " << endl;
    else cout << "Nam ngoai hinh chu nhat. " << endl;
    return 0;
}
