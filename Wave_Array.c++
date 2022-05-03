class Solution{
    public:
    
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    
    
    void convertToWave(int n, vector<int>& arr){
        
        int i=0;
        while(i<n)
        {
            if(i+1<n)
            {
                swap(arr[i],arr[i+1]);
            }
            i=i+2;
        }
       
    }
};
