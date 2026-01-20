

// done in linear time complexity
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                return i;
            }
        }return -1;
        
    }
};

// can be solved using O( log n) - using modifed binary search approach