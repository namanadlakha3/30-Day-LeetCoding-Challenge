class Solution {
public:
    bool checkValidString(string s) {
        int n=s.length();
        unordered_map<char,int>mp;
        int ans=0,r=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
             mp[s[i]]++;  
            }
             if(s[i]=='*')
                r++;  
            if(s[i]==')')
            {
              
               if(mp['(']!=0)
                   mp['(']--;
                else if(r!=0)
                    r--;
                else
                    return false;
              
            }
         
            
            
        }
        if(mp['(']>0)
        {
            mp.clear();
            r=0;
          for(int i=n-1;i>=0;i--)
        {
            if(s[i]==')')
            {
             mp[s[i]]++;  
            }
             if(s[i]=='*')
                r++;  
            if(s[i]=='(')
            {
              
               if(mp[')']!=0)
                   mp[')']--;
                else if(r!=0)
                    r--;
                else
                    return false;
              
            }
          }
        }
        
      return true;
        
        
    }
};