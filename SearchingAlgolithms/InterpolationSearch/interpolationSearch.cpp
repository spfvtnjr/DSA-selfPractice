#include <iostream>
using namespace std;
int interpolationSearch(int *arr, int low, int high, int key)
{
    int pos;
    if (low <= high && key >= arr[low] && key <= arr[high])
    {
        pos = low + (((double)(high - low) / (arr[high] - arr[low])) * (key - arr[low]));
        if (arr[pos] == key)
            return pos;
        if (arr[pos] < key)
            return interpolationSearch(arr, pos + 1, high, key);
        if (arr[pos] > key)
            return interpolationSearch(arr, low, pos - 1, key);
    }
    return -1;
}
int main()
{

    // Array of items on which search will
    // be conducted.
    int arr[] = {10, 12, 13, 16, 18, 19, 20, 21,
                 22, 23, 24, 33, 35, 42, 47};

    int n = sizeof(arr) / sizeof(arr[0]);

    // Element to be searched
    int x = 18;
    int index = interpolationSearch(arr, 0, n - 1, x);

    // If element was found
    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found.";

    return 0;
}
