#include<iostream>
using namespace std;

void rotate(int[],int,int);
void print(int[],int);
int gcd(int ,int);

int main(){

	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int size=(sizeof arr/sizeof arr[0]);
	int num=5;
	print(arr,size);
	rotate(arr,size,num);
	print(arr,size);
	return 0;

}

//utility function
//print function
void print(int arr[],int size){
	for(int i=0;i<size;i++){
	cout<<arr[i]<<" ";
	}
	cout<<endl;
}

//rotate using gcd
void rotate(int arr[],int size,int num){
	int i,j,k,temp;
	for(i=0;i<gcd(num,size);i++){
        temp=arr[i];
        j=i;
           while(1){
            k=j+num;
            if(k>=size)k=k-size;
            if(k==i)break;
            arr[j]=arr[k];
            j=k;
           }
        arr[j]=temp;
	}
}

//gcd function
int gcd(int num,int size){
if(size!=0){
    return gcd(size,num%size);
}
else {
    return num;
}
}


