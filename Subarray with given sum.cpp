class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {   vector<int> subarray;
        int low=0;
        int high=0;
        int sum=0;
        
        
            for(int i=0;i<n;i++)
            {
                sum=sum+arr[high];
                while(sum>s&& low<high)
                {   
                    sum=sum-arr[low];
                    low++;
                }
                
                if(sum==s)
                {
                    subarray.push_back(low+1);
                    subarray.push_back(high+1);
                    return subarray;
                }
                 high++;
              
            }
            
        
        subarray.push_back(-1);
        return subarray;
    }
};
