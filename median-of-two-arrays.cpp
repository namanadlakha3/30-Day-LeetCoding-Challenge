class Solution {
public:
    double findMedianSortedArrays(vector<int>& n1, vector<int>& n2) {
        
        vector<int>v;
       
        for(int i=0;i<n1.size();i++)
        {
            v.push_back(n1[i]);
        }
          for(int i=0;i<n2.size();i++)
        {
            v.push_back(n2[i]);
        }
        sort(v.begin(),v.end());
        double ans;
        if(v.size()%2==1)
        {
             ans=v[(v.size()/2)];
        }
        else
        {
         ans=v[(v.size()/2)]+v[(v.size()/2)-1];
            ans=ans/2;
        }
        return ans;
    }
};
