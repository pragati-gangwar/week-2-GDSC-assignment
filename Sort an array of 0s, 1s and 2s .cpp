//Sort an array of 0s, 1s and 2s 

void sort012(int arr[], int n)
{
    int count1=0;
    int count2=0;
    int count0=0;
    for(int i =0; i<n;i++)
    {
        if(arr[i]==0)
        count0++;
        if(arr[i]==1)
        count1++;
        if(arr[i]==2)
        count2++;
    }
   int j=0;
   while(count0>0)
   {
       arr[j]=0;
       j++;
       count0--;
   }
    while(count1>0)
   {
       arr[j]=1;
       j++;
       count1--;
   }
    while(count2>0)
   {
       arr[j]=2;
       j++;
       count2--;
   }
   
    
       
    
}
