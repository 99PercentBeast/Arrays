#include<iostream>
using namespace std;

void rotate(int[],int,int);
void print(int[],int);

int main(){
    
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int size=(sizeof arr/sizeof arr[0]);
	int num=5;
	print(arr,size);
	rotate(arr,size,num);
	print(arr,size);
	return 0;
}

//print function
void print(int arr[],int size){
	for(int i=0;i<size;i++){
	cout<<arr[i]<<" ";
	}
	cout<<endl;
}

//rotate
void rotate(int arr[],int size,int num){
	int i,j,temp;
	for(i=0;i<num;i++){
        temp=arr[0];
            for(j=0;j<size;j++){
                arr[j]=arr[j+1];
            }
        arr[j]=temp;
	}
}
