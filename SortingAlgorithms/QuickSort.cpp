#include <iostream>
using namespace std;
// function to print the arr
void printarr(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// function to print the arr
void printarr(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

// function to rearrange arr (find the partition point)
int partition(int arr[], int low, int high) {
    
  // select the rightmost element as pivot
  int pivot = arr[high];
  
  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the arr
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (arr[j] <= pivot) {
        
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      
      // swap element at i with element at j
      swap(arr[i], arr[j]);
    }
  }
  
  // swap pivot with the greater element at i
  swap(arr[i + 1], arr[high]);
  
  // return the partition point
  return (i + 1);
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {
      
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on righ of pivot
    int pi = partition(arr, low, high);

    // recursive call on the left of pivot
    quickSort(arr, low, pi - 1);

    // recursive call on the right of pivot
    quickSort(arr, pi + 1, high);
  }
}
int main()
{
    int data[] = {8, 7, 6, 1, 0, 9, 2};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Unsorted arr: \n";
    printarr(data, n);

    // perform quicksort on data
    quickSort(data, 0, n - 1);

    cout << "Sorted arr in ascending order: \n";
    printarr(data, n);
}