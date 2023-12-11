#include <iostream>
using namespace std;

template <typename T>
void selectionSort(T arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arr[min_idx], arr[i]);
    }
}

int main()
{
    int int_arr[] = {5, 3, 2, 4, 1};
    float float_arr[] = {5.5, 3.3, 2.2, 4.4, 1.1};
    int n = sizeof(int_arr) / sizeof(int_arr[0]);
    int m = sizeof(float_arr) / sizeof(float_arr[0]);

    selectionSort(int_arr, n);
    selectionSort(float_arr, m);

    cout << "Sorted integer array: ";
    for (int i = 0; i < n; i++)
    {
        cout << int_arr[i] << " ";
    }
    cout << endl;

    cout << "Sorted float array: ";
    for (int i = 0; i < m; i++)
    {
        cout << float_arr[i] << " ";
    }
    cout << endl;

    return 0;
}
