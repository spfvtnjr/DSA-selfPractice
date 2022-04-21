	#include<iostream>
using namespace std;
int isCentered(int *arr,int n){
 if(n%2==0) return 0;
 int front=0;
 int back=n-1;
 int mid=(n-1)/2;
 cout<<"mid is:"<<arr[mid]<<endl;
 for(int i=0; i<n/2; i++){
 	if(arr[front]<arr[mid] || arr[back]<arr[mid])
 	return 0;
 	front++;
 	back--;
	}
	return 1;
}

int main(){
 int arr[]={1,2,6,2,1};
 int n=sizeof(arr)/sizeof(arr[0]);
 cout<<isCentered(arr,n);
}

