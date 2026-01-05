#include<stdio.h>

int*twosum(int*arr , int target , int numsize , int *returnsize){
    int *result = (int *)malloc(2*sizeof(int));
    *returnsize=2;
    for(int i=0;i<numsize;i++){
        for(int j=i+1;j<numsize;j++){
            if(arr[i]+arr[j]==target){
                result[0]=i;
                result[j]=j;
            }
        }
    }
    
    return result;
}
