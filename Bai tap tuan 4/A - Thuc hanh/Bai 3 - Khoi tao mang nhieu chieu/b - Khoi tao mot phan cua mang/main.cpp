#include <iostream>

using namespace std;

int main()
{
    cout << "Cach 1: " << endl;
    int daytab1[2][12] = {{3,8,3,3,1,3,1,1,3,3,1},{1,9,1,3,1,7,3,7,1,3,1}};
    int daytab2[2][12] = {3,8,3,3,1,3,1,1,3,3,1,1,9,1,3,1,7,3,7,1,3,1};

    for (int i = 0; i < 2; i++)
    {
    for (int j = 0; j < 12; j++)
    {
        cout << daytab1[i][j] << " ";
    }
    cout << endl;
    }

    cout << "Cach 2: " << endl;
    for (int i = 0; i < 2; i++)
    {
    for (int j = 0; j < 12; j++)
    {
        cout << daytab2[i][j] << " ";
    }
    cout << endl;
    }

    return 0;
}
