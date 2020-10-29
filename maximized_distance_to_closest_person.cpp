class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int ans=0;
        int flag=0;
        int max=0;
     int first=0;
        bool f=true;
            int check=0;
        for(int i=0;i<seats.size();i++)
        {
            if(seats[i]==1)
            {
                f=false;
            }
            if(seats[i]==0)
            {
                if(f)
                    check++;
                flag++;
                
            }
            else
            {
                if(max<flag)
                {
                    max=flag;
                }
                
                flag=0;
            }
            
        }
        if(flag*2-1>=max)
            max=flag*2-1;
        
        max=max%2==1?max/2+1:max/2;
  
        
        return max>check?max:check;
    }
};
