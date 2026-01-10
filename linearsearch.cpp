#include<iostream>
using namespace std;

int linearSearch( int *arr , int n , int key){
for(int i=0 ;i<n; i++){
    if(arr[i]==key){
        return i;
    }
}
return 1;
}

int main(){

int arr[5]={8,24,99,22,3};
int n;
 n=(sizeof(arr)/sizeof(int));

int c = linearSearch(arr , n , 10);
cout<<"index is: "<<c<<endl;
    return 0;
}
