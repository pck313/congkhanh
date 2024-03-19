#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void hoanvi(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sapxepnoibot(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                hoanvi(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void inmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand(time(NULL));
    int arr[30];
    for (int i = 0; i < 30; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
    cout << "Mang ban dau: ";
    inmang(arr, 30);
    sapxepnoibot(arr, 30);
    cout << "Mang sau khi sap xep: ";
    inmang(arr, 30);
    return 0;
}
