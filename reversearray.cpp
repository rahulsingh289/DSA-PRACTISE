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
int copyArr[5];
for(int i=0;i<n;i++){
    int j= n-i-1;
    copyArr[i]=arr[j];
}
for(int i=0; i<n;i++){
    arr[i]=copyArr[i];
}
printit(arr,n);

    return 0;
}