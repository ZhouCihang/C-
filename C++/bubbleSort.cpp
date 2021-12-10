#include <iostream>
using namespace std;
#include <array>

int main()
{

    int arr[] = {2, 4, 0, 5, 7, 1, 3, 8, 9};
    int start = 0;
    int temp;

    for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1; j++)
    {
        for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - j - 1; i++)
        {
            if (arr[start] > arr[start + 1])
            {
                temp = arr[start];
                arr[start] = arr[start + 1];
                arr[start + 1] = temp;
            }
            start++;
        }
        for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
        {
            cout << arr[j] << endl;
        }
        start = 0;
    }

    return 0;
}