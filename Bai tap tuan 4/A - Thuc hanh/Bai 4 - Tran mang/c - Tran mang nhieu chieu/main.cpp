#include <iostream>
using namespace std;

int main()
{
    int mang[3][4] =
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    mang[0][4] = 13;
    mang[0][5] = 14;
    mang[0][6] = 15;
    cout << "Mang 2 chieu sau khi ghi tran: " << endl;
    for (int i = 0; i < 3; ++i)
        {
        for (int j = 0; j < 7; ++j)
        {
            cout << mang[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
