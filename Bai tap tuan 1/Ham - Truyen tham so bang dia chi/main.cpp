#include <iostream>

using namespace std;

int triple(int* px)
{
  *px = *px + *px + *px;
  return *px;
}

int main()
{
    int a = 10;
    cout << triple(&a) << endl;
    cout << "a = " << a;
}
