class Solution  {
public:
    bool buddyStrings(string a, string b) {
      int c=0;
        unordered_map<char,int>mp;
        if(a==b)
        {
            for(int i=0;i<a.length();i++){if(mp[a[i]]!=0)return true;
                                          mp[a[i]]++;}
        }
        for(int i=0;i<a.length();i++){if(a[i]!=b[i])c++;}
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(c==2&&a==b)
            return true;
        return false;
    }
};
