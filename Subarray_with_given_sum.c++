 
 class Solution{
  public:
     vector<int> subarraySum(int arr[], int n, long long s)
     {
 
       vector<int> ans;

              long long curr_s= 0;
              int left= 0;
              int right= 0;
              while(curr_s!= s && left<n){
                  curr_s+= arr[right];
                  right++;

                  while(curr_s> s){
                      curr_s-=arr[left];
                      left++;
                  }
              }

              if(curr_s == s){
                  ans.push_back(left+1);
                  ans.push_back(right);
                  return ans;
              }

              ans.push_back(-1);
              return ans;
        }
        
 };

