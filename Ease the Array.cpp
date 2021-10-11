class Solution{
    public:
        void modifyAndRearrangeArr(int arr[], int n) 
    { 
        int res=0;
    	int temp=0;
    	for(int i=0;i<n-1;i++)
    	{
    	    if(arr[i]==arr[i+1]&&arr[i]!=0)
    	    {
    	        arr[i]=2*arr[i];
    	        arr[i+1]=0;
    	    }
    	    
    	}
    	for(int i=0;i<n;i++)
    	{
    	   if(arr[i]!=0)
    	   {
    	       temp=arr[i];
    	        arr[i]=arr[res];
    	        arr[res]=temp;
    	        res++;
    	   }
    	    
    	}
    	
    }
}; 
