	#include<iostream>
using namespace std;
int isCentered(int *arr,int n){
	int mid=(n+1)/2;
	for(int i=0; i<n;i++){
		if(i==mid){
			continue;
			cout<<"I continued";
		}
		else if(arr[i]<=arr[mid]	){
		return 0;	
		}
	}
	return 1;
}

int main(){
 int arr[]={1,2,0,2,1};
 int n=sizeof(arr)/sizeof(arr[0]);
 cout<<isCentered(arr,n);
}

