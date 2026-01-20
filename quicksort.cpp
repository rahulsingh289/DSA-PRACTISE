#include<iostream>
#include<vector>


int partition(arr,si,ei){
    i=si-1,pivotidx=arr[ei];
    for(int j=si;j<ei;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j])
        }
        i++;
        swapr[arr[i],arr[ei]]
        return i;
        }
    }




quicksort(arr,si,ei){
    pivotidx=parttion(arr,si,ei);
    quicksort(pivotidx-1);
    quicksort(pivotidx+1,ei);
}