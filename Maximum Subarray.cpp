class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      
       
        int cur_sum=nums[0];
         int sum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(cur_sum>=0)
            {
                cur_sum+=nums[i];
            }
            else 
                cur_sum=nums[i];
            if(cur_sum>sum)
                sum=cur_sum;
        }
        return sum;
    }
};
