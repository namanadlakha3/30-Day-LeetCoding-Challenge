class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
        mp[arr[i]]++;
        }
        int ans=0;
         for(int i=0;i<n;i++)
        {
        if(mp[arr[i]+1]!=0)
        {
            ans++;
           // mp[arr[i]+1]--;
        }
        }
        return ans;
        
    }
};