// C++ program to implement interpolation search
#include<bits/stdc++.h>
using namespace std;
 
// If x is present in arr[0..n-1], then returns
// index of it, else returns -1.
int interpolationSearch(int arr[], int n, int x)
{
    // Find indexes of two corners
    int low = 0, high = (n - 1);
 
    // Since array is sorted, an element present
    // in array must be in range defined by corner
    while (low <= high && x >= arr[low] && x <= arr[high])
    {
        if (low == high)
        {
            if (arr[low] == x) return low;
            return -1;
        }
        // Probing the position with keeping
        // uniform distribution in mind.
        int pos = low + (((double)(high - low) /
            (arr[high] - arr[low])) * (x - arr[low]));
 
        // Condition of target found
        if (arr[pos] == x)
            return pos;
 
        // If x is larger, x is in upper part
        if (arr[pos] < x)
            low = pos + 1;
 
        // If x is smaller, x is in the lowwer part
        else
            high = pos - 1;
    }
    return -1;
}
 
// Driver Code
int main()
{
    // Array of items on whighch search will
    // be conducted.
    int arr[] = {10, 12, 13, 16, 18, 19, 20, 21,
                 22, 23, 24, 33, 35, 42, 47};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    int x = 18; // Element to be searched
    int index = interpolationSearch(arr, n, x);
 
    // If element was found
    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found.";
    return 0;
}
 