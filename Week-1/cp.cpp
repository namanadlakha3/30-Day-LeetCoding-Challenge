#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
       long int mi=INT_MAX;
       long int n;
       cin>>n;
       long int a[n],b[n];
      vector<int>v;
      unordered_map<int,int>mp;
   
   
       long int x;
       cin>>x;
  mi=min(x,mi);
       v.push_back(x);
       mp[x]++;
      for(int i=1;i<n;i++)
      {
          cin>>a[i]; 
          mi = min(mi, a[i]);
          x=x^a[i];
      
          if(mp[a[i]]==0)
           v.push_back(a[i]);
          mp[a[i]]++;
          
      }
          for(int i=0;i<n;i++)
      {
          cin>>b[i];
          x=x^b[i];
        mi = min(mi, a[i]);
        
           if(mp[b[i]]==0)
           v.push_back(b[i]);
          mp[b[i]]++;
      }

 void cal()
 {
    
            unordered_map<int,int>cor;
                for(auto it=mp.begin(); it!=mp.end(); it++)
                {
      
            cor[it->first] = it->second/2;
        }
        unordered_map<int,int>mp1;
       unordered_map<int,int>mp2;
                vector<long int>v1;
       vector<long int>v2;
            mp1=cor;
            mp2=cor;
            for(int i=0;i<n;i++)
            {
                if(mp1[a[i]])
                mp1[a[i]]--;
                else
                v1.push_back(a[i]);
               if(mp2[b[i]])
                mp2[b[i]]--;
                else
                v2.push_back(b[i]);
            }
         
           if(v1.size()==0)
           {
            cout<<0<<'\n';
            return;
           }
            else if(v1.size()!=v2.size())
            {
            cout<<-1<<'\n';
            return;
            }
                int cost=0;
                sort(v1.begin(),v1.end());
                sort(v2.begin(),v2.end(),greater<>());
                 for(int i=0; i<v1.size(); i++)
        cost += min(2*mi, min(v1[i],v2[i]));
                 
    cout << cost << endl;
           
        
      
 }
      cal();
    
    }
	// your code goes here
	return 0;
}
