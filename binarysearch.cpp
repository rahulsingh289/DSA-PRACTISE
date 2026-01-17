#include<iostream>
using namespace std;
int binarySearch(int *arr ,int n , int key){
int start=0,end=n-1;
while(start<=end){
    int mid = ((start+end)/2);
    if(arr[mid]==key){
        return mid;
    }
    else if (arr[mid]<key){
        start=mid+1;
    }
    else {
        end=mid-1;
    }
} return -1;
}
int main(){
    int n,key;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements in only sorted way"<<endl;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    cout<<"enter the key value to search"<<endl;
    cin>>key;
    int start,end;
    n=(sizeof(arr)/sizeof(int));
    cout<<"the index in which key found is: " <<binarySearch(arr , n,key)<<endl;
    return 0;
}

//  dynamic is written below;

/*
#include<iostream>
using namespace std;
int binarySearch(int *arr ,int n , int key){
int start=0,end=n-1;
while(start<=end){
    int mid = ((start+end)/2);
    if(arr[mid]==key){
        return mid;
    }
    else if (arr[mid]<key){
        start=mid+1;
    }
    else {
        end=mid-1;
    }
} return -1;
}
int main(){
    int arr[8]={2,4,6,8,10,12,14,16};
    int n,start,end;
    n=(sizeof(arr)/sizeof(int));
    cout<<binarySearch(arr , n,10)<<endl;
    return 0;
} */