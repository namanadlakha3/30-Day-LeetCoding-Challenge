class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>mp;
        vector<string>ans;
       
        for(int i=0;i<s.length();i++)
        {
            if(i+10<=s.length())
            {
        mp[s.substr(i,10)]++;
            if(mp[s.substr(i,10)]==2)
            {
                ans.push_back(s.substr(i,10));
             //  mp[s.substr(i,10)]=0; 
            }}
            else
                break;
        }
        return ans;
    }
};
