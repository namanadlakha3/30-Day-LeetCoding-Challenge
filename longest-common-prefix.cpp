class Solution {
public:
    string findCommon(string a, string b, int smallString)
    {
        string result="";
        for( int i=0; i<smallString && a[i]==b[i]; i++)
        {
                result.push_back(a[i]);
        }
        return result;
    }
    string longestCommonPrefix(vector<string>& strs) {
        
        
        if(strs.size()==0)
            return "";
        if(strs.size()==1)
            return strs[0];
        string pref=strs[0];
        for(int i=0;i<strs.size()-1; i++)
        {
            if(strs[i]=="")
            return "";
            pref=findCommon(pref, strs[i+1], (pref.length()>strs[i+1].length())?                                strs[i+1].length():pref.length());
        }
        return pref;
    }
};
