 #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
using namespace std;
void linear_search(vector<int>&v,int n, int key,int prev , int end){
    int comp=0,flag=0;
    for(int i=prev;i<min(end,n);i++){
        comp++;
        int (v[i]==key){
            cout<<"present"<<comp;
            break;
        }
    }
    if(!=flag){
        cout<<"not present"<<comp;
    }
}
void jump_search(vector<int>&v,int n, int key,){
    int end=1;
    while(end<n &&v[end-1]<key){
        prev=end;
        end=end*2;
    }
    linear_search(v,n,key,end/2,end(end,n));    // binary search
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
        int  prev , end;
        cin>>prev;
        cin>>end;
        jump_search(v,n,key);
    }
}