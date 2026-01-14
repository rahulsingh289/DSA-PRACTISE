 #include<bits/stdc++.h>
using namespace std;
void linear_search(vector<int>&v,int n, key){
    int comp=0,flag=0;
    for(int i=0;i<n;i++){
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
        linear_search(v,n,key);
    }
}