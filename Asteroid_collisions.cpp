class Solution {
public:
    bool isNeg(int n)
    {
        return n<0;
    }
    vector<int> asteroidCollision(vector<int>& arr) {
vector <int> ret;
      int n = arr.size();
      for(int i = 0; i< n; ){
         if(ret.empty() || !(!isNeg(ret[ret.size() - 1]) && isNeg(arr[i]))){
            ret.push_back(arr[i]);
            i++;
         } else {
            int x = ret[ret.size() - 1];
            ret.pop_back();
            int absX = abs(x);
            int absY = abs(arr[i]);
            if(absX == absY){
               i++;
            } else {
               if(absX > absY){
                  ret.push_back(x);
                  i++;
               }
            }
         }
      }
      return ret;
    }
};
