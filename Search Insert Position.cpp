//Search Insert Position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size=nums.size();
        int low=0;
        int high=size-1;
        int mid;
       while(low<=high)
       {
             mid=(low+high)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
            {
                high=mid-1;
                
            }
            else
                low=mid+1;
                
        }
        if(nums[mid]<target)
        return mid+1;
        else return mid;
        
    }
};
