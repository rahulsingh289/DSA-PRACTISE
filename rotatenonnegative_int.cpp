class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int>v;
        
        for(int x:nums) {
            if(x>=0){
                v.push_back(x);
            }
        }
        int n=v.size();
        if(n==0) return  nums;
            k%=n;
            rotate(v.begin(),v.begin()+k,v.end());
            int j=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                nums[i]=v[j++];
            }
        } return nums;
        
    }
};