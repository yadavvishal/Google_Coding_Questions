 
 class Solution{
  public:
     vector<int> subarraySum(int arr[], int n, long long s)
     {
 
       vector<int> ans;

              long long curr_s= 0;
              int st= 0;
              int i= 0;
              while(curr_s!= s && st<n){
                  curr_s+= arr[i];
                  i++;

                  while(curr_s> s){
                      curr_s-=arr[st];
                      st++;
                  }
              }

              if(curr_s == s){
                  ans.push_back(st+1);
                  ans.push_back(i);
                  return ans;
              }

              ans.push_back(-1);
              return ans;
        }
        
 };

