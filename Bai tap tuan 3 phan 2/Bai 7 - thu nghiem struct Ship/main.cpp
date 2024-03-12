#include <iostream>
#include <string>
using namespace std;

struct Point
{
    int x, y;
};

struct Rect
{
    int x, y;
    int w, h;
};

struct Ship
{
    Rect rect;
    string id;
    int dx, dy;

    void move()
    {
        rect.x += dx;
        rect.y += dy;
    }
};

void display(const Ship& ship)
{
    cout << "Ship ID: " << ship.id << endl;
    cout << "Position: (" << ship.rect.x << ", " << ship.rect.y << ")" << endl;
}

int main()
{

    Ship ship1 = {{0, 0, 10, 5}, "Ship1", 1, 2};
    Ship ship2 = {{5, 5, 8, 4}, "Ship2", -1, 1};

    int loop = 0;
    while (loop < 10)
        {
        ship1.move();
        ship2.move();
        display(ship1);
        display(ship2);
        loop++;
        }
}
