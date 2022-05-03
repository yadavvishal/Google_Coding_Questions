class Solution{
    public:
    int search(int A[], int l, int h, int key){
    int count=0;
    int i=0;
    while(i<h)
    {
        if(A[i]==key)
        {
            return count;
        }
        count++;
        i++;
    }
    return -1;
    }
    
};
