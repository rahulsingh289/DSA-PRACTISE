// aproach 1 -

/* class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    }
}; */

// approach 2 -
/* class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int count=0, count1=0,count2=0,i;
        for(i=0;i<n;i++){
            if(nums[i]==0){
                count++;
            }
            else if (nums[i]==1){
                count1++;
            }
            else count2++;
        }
        int index=0;
    
        for(i=0;i<count;i++){
      nums[index++]=0;
        }
        for(i=0;i<count1;i++){
      nums[index++]=1;
        }
        for(i=0;i<count2;i++){
      nums[index++]=2;
        }   
    }
}; */

// approach 3 -

class Solution {
public:
    void sortColors(vector<int>& nums) {
    }
}