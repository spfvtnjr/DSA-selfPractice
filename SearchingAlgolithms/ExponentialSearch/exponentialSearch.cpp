#include<iostream>
using namespace std;
int binarySearch(int *arr,int start, int end, int key){
  int mid=(start+end)/2;
  if(key==arr[mid]) return mid;
  if(arr[mid]<key) return binarySearch(arr,mid+1,end,key);
  else return binarySearch(arr,start,mid-1,key);
}
int exponentialSearch(int *arr,int n, int key){
    if (arr[0]==key) return 0;
    int i=1;
    while (arr[i]<key && i<n) i*=2;
    return binarySearch(arr, i/2, min(i, n-1), key);
}
int main(void)
{
   // An array with elements
   int arr[] = {21, 27, 32, 41, 49, 55, 67, 78, 99};
   // n - size of array
   int n = sizeof(arr)/ sizeof(arr[0]);
   // x - Search key
   int x = 21;
   
   int result = exponentialSearch(arr, n, x);
   
   if (result == -1){
       cout <<"Search key is not present in array";
   } else {
       cout <<"Search key is present at index " << result;
   }
   return 0;
}