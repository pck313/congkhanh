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
        Ship::rect.x += dx;
        Ship::rect.y += dy;
    }
};

void display(const Ship& ship)
{
    cout << "Ship ID: " << ship.id << endl;
    cout << "Position: (" << ship.rect.x << ", " << ship.rect.y << ")" << endl;
}

int main()
{

    Ship ship;
    cout << "Nhap x: ";
    cin >> ship.rect.x;
    cout << "Nhap y: ";
    cin >> ship.rect.y;
    cout << "Nhap w: ";
    cin >> ship.rect.w;
    cout << "Nhap h: ";
    cin >> ship.rect.h;
    cout << "ID cua tau: ";
    cin >> ship.id;
    cout << "Van toc tau theo x: ";
    cin >> ship.dx;
    cout << "Van toc tau theo y: ";
    cin >> ship.dy;

    ship.move();

    display(ship);

}
