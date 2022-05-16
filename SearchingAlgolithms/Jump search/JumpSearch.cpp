#include <iostream>
#include <cmath>
using namespace std;

int jumpSearch(int *arr, int n, int key)
{
    int start = 0, end = sqrt(n);
    while (arr[end]<key && end < n)
    {
        start = end;
        end = end + sqrt(n);
        if (end > n - 1)
            end = n;
    }
    for (int i = start; i < end; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,3,4,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]), key=8;
    int result=jumpSearch(arr,n,key);
     if(result == -1){
        cout << "Element is not in the array :-(";
    } else {
        cout << "Element found at position : " << result;
    }
    return 0;
    
}