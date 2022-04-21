#include<iostream>
using namespace std;
int main(){
	int arr[]={1,4,5434,656,34,23,5,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	int max=arr[0];
	int min=max;
for(int i=0; i<n; i++){
	if(arr[i]>max){
		max=arr[i];
	}
	if (arr[i]<min){
	min=arr[i];
	}
}
cout<<"Maximum number: "<<max<<endl;
cout<<"Minimum number: "<<min;
}

