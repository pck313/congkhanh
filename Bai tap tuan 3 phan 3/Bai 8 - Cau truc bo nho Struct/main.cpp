#include <iostream>
using namespace std;

struct Point
{
    int x, y;
};

int main()
{

    Point point;
    cout << "Address of x: " << &point.x <<endl;
    cout << "Address of y: " << &point.y;

}
