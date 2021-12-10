#include <iostream>
using namespace std;
#include <array>

int main()
{

    int arr[] = {2, 4, 0, 5, 7, 1, 3, 8, 9};
    int temp;

    cout << "before bubble sort: " << endl;
    for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;

    for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1; j++)
    {
        for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - j - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    cout << "after bubble sort: " << endl;
    for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
    {
        cout << arr[j] << " ";
    }

    cout << endl;
    return 0;
}