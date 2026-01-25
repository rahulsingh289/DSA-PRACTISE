class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      int n =nums.size();
      k = k%n; // it is just for - If k is larger than the array size, reduce it
      reverse(nums.begin(),nums.end());
      reverse(nums.begin(),nums.begin()+k);
      reverse(nums.begin()+k,nums.end());
      }
    
};