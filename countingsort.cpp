void CountSort(int arr[],int n){
    int freq[1000000]={0};
    int minval=INT_MAX,maxval=INT_MIN;
    for(int i=0;i<n;i++){
        minval = min(minval,arr[i]);
        maxval = min(maxval,arr[i]);
    }
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
}
for(int i=minval;j=0;i<=maxval;i++){
    while(freq[i]>0){
        arr[j++]=i;
        freq[i]--;
    }
}  
}
