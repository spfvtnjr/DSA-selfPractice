#include <iostream>
using namespace std;
void missing_ranges(int *nums, int low, int high, int size ){
 for (int i = low; i < size-1; i++)
 {
     if(nums[i+1]!=nums[i]+1){
       cout<<"("<<nums[i]+1 <<","<<nums[i+1]-1<<")" <<endl;
     }
 }
}
int main(){
 int arr[]={1,3,5,10};
 missing_ranges(arr,0, 10,4);
}