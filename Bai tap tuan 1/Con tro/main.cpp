#include <iostream>

using namespace std;

struct Monster
{
    string name;
    int x,y;
};
int main()
{
    Monster alex;
    Monster* pMonster = &alex;   // con trỏ pMonster trỏ tới biến alex
    cout << "Memory address of alex " << pMonster << endl;

    int x = 1;
    int* p1 = &x;             // con trỏ p1 trỏ tới biến x
    int* p2; p2 = &alex.x;        // con trỏ p2 trỏ tới biến alex.x
    cout << "Memory address of x is " << p1 << endl;
    cout << "Memory address of alex.x is " << p2 << endl;

    *p1 = *p1 + 1;   // tương đương với x = x + 1 khi p1 đang trỏ tới x
    *p2 = *p2 + 1;   // giống alex.x = alex.x + 1 khi p2 đang trỏ tới alex.x

    cout << &(pMonster->name) << endl;
    cout << &(pMonster->x) << endl;
    cout << &(pMonster->y) << endl;
}
