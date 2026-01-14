/* given an array of integers , we have to find out whether 
arr[i]+arr[j]==sum or not and sum is provided by user.
give all three approaches. bigoh n square , big oh n , and another one.*/

// brute force - 

bool twoSum(int arr[], int n, int sum) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum)
                return true;
        }
    }
    return false;
}

// hashing - 
#include <unordered_set>
using namespace std;

bool twoSum(int arr[], int n, int sum) {
    unordered_set<int> s;

    for(int i = 0; i < n; i++) {
        if(s.find(sum - arr[i]) != s.end())
            return true;
        s.insert(arr[i]);
    }
    return false;
}

// sorting + two pointers 

#include <algorithm>
using namespace std;

bool twoSum(int arr[], int n, int sum) {
    sort(arr, arr + n);

    int left = 0, right = n - 1;
    while(left < right) {
        int currSum = arr[left] + arr[right];
        if(currSum == sum)
            return true;
        else if(currSum < sum)
            left++;
        else
            right--;
    }
    return false;
}
