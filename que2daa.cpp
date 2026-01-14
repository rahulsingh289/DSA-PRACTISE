 #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
using namespace std;
void binary_search(vector<int>&v,int n, int key){
   int s=0,e=n-1,mid,comp=0,flag=0;
   while(s<=e){
    comp++;
    mid=(s+e)/2;
    if(v[mid]==key){
        flag=1;
        cout<<"present"<<comp;
        break;
    }
    else if(key<v[mid]){
        e=mid-1;
    }
    else {
        s=mid-1;
    }
   }
}
int main(){
    int t; // no of test cases
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);  // int arr[n]
        for(int i=0;i<n;i++){
         cin>>v[i];
        }
        int key;
        cin>>key;
        binary_search(v,n,key);
    }
}