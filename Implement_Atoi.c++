// Program to convert the string into  an integer
// Without using Built in function


class Solution{
  public:
    
    int atoi(string str) {
        int result=0;
        int i=0;
        bool flag =false;
        if(str[0]=='-')
        {
            flag=true;
            i=1;
        }
        while(i<str.size())
        {
            if(str[i]>='0' && str[i]<='9')
            {
                result=result*10 +(str[i]-'0');
                i++;
            }
            else
            {
                return -1;
            }
        }
        if(flag)
        {
            return -result;
        }
        else
        {
            return result;
        }
    }
        
};
