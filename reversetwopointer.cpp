#include<iostream>
using namespace std;

void printit(int *arr , int n ){
for(int i=0;i<n;i++){
    cout<<arr[i]<<",";
}
cout<<endl;
}

int main(){

int arr[5]={1,2,3,4,5};
int n;
 n=(sizeof(arr)/sizeof(int));

int start =0,end=n-1;
while(start<end){
// swap logic -

    /* int temp=arr[start];
    arr[start]=arr[end];         
    arr[end]=temp; */

    // swap logic with inbuilt function
    swap(arr[start],arr[end]);
    start++;
    end--; 
}
printit(arr,n);

    return 0;
}