#include <iostream>
using namespace std;

template <class T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T>
void bubbleSort(T a[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                mySwap(a[j], a[j + 1]);
            }
        }
    }
}

template <class T>
void printArray(T a[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void test01()
{
    char cTest[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    char cArray[] = "bcdefg";
    int iTest[] = {0, 1, 2, 3, 4, 5, 6, 7};

    int len = sizeof(cArray) / sizeof(cArray[0]);
    bubbleSort(cArray, len);
    printArray(cArray, len);

    int len1 = sizeof(iTest) / sizeof(iTest[0]);
    bubbleSort(iTest, len1);
    printArray(iTest, len1);
}

int main()
{
    test01();
    return 0;
}