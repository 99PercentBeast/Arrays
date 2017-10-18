#include<iostream>
using namespace std;

void print(int[],int);

int main(){
	//code
	int size;
	int arr[1000];
	cout<<"Enter the size of array : ";
	cin>>size;
	cout<<"\nEnter "<<size <<" Arrays : ";
	for(int i=0;i<size;i++)cin>>arr[i];
	print(arr,size);
	return 0;
}

//print or utility function 

void print(int arr[],int size){
	cout<<"\nTraversing Array : ";
	for(int i=0;i<size;i++)cout<<arr[i]<<" ";
	cout<<endl;
}
