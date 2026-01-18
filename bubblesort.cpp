/* for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        arr[j]>arr[j+1];
        swap(arr[j],arr[j+1]);
    }
} */


// optimization 

for(int i=0;i<n-1;i++){
    IsSwap=false;
    for(int j=0;j<n-i-1;j++){
        arr[j]>arr[j+1];
        swap(arr[j],arr[j+1]);
        IsSwap=true;
    }
}
if(IsSwap =true){
    return ;
}
