#include<iostream>
using namespace std;
//using swapping;
int reverseArray(int arr[],int start, int end){
	while(start<end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
//using recursion
int revArray(int arr[],int start, int end){
	//defining the basecase
	if(start>end){
		return 0;
	}
	//logic here
	int temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	revArray(arr,start+1,end-1);
}
int main(){
 int arr[]={1,23,223,25,4,7.3,7};
 char string[9]="Souvenir";
 int n=sizeof(arr)/sizeof(arr[0]);
 revArray(string,0,n-1); 
 for(int i=0; i<n;i++){
 	cout<<arr[i]<<endl;
	}
}

