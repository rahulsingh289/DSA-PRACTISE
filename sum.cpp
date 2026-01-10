#include<iostream>
using namespace std;

int main(){
int n;
    int arr[5]={1,2,3,4,5};
    int sum=3;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                    return 1;
            }
            else {
                return 0;
            }
        }
    }
    
    return 
    0;
}



#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int sum;
cin>>sum;
for(int i=0;i<n;i++){
    for(int j=i+1;i<n;j++){
        if(arr[i]+arr[j]==sum){
            return 1;
        }
    }
}



    return 0;
}
