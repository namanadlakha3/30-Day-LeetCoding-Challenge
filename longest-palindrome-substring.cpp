class Solution {
public:
    bool double_equals(double a, double b, double epsilon = 0.000000001)
{
    return std::abs(a - b) < epsilon;
}
 
    string longestPalindrome(string s) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int n=s.size();
        int max=0;
        int ans=0;
     
        for(int i=0;i<n;i++)
        {

        unsigned  long long int a=0,b=0;
          unsigned  long long int z=1;
            for(int j=i;j<n;j++)
            {
      
              a+=z*(int(s[j])-96);
                z*=2;
                b=b*2+(int(s[j])-96);
         
               if(j-i+1>max)
                {
        
                    if(double_equals(a,b))
                    {
                      
                       bool  flag=true;
                    int p=j-i+1;
                    
                     for(int k=0;k<p/2;k++) 
                     {
                        if (s[i+k]!=s[j-k])
                        {
                            flag=false;
                            break;
                            }
                         }
                     if (flag==false)
                        continue;
                        
                   
                max=j-i+1;
                    ans=i;
                    }
                }
          
            }
        }

        return s.substr(ans,max);
    }
};
