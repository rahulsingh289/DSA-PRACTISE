class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int n =nums.size();
        if(n==0) return 0;
        int a = n-1;
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i])
            {a=i-1;
            }
            else {break;}
        }
        return a;
    }
};