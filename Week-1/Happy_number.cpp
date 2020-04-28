class Solution {
public:
    int singleNumber(vector<int>& a) {
         unordered_map<int,int>mp;
        for(int i=0;i<a.size();i++)
        {
            mp[a[i]]++;
        }
        int ans;
      for(int i=0;i<a.size();i++)
        {
            if(mp[a[i]]==1)
            {
                ans=a[i];
                break;
            }
        }
        return ans;
        
    }
};