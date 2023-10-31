class Solution { 
public:
    void rotate(vector<int>& arr, int d) {
        int n=arr.size();
        
 d = d % n; 
        d=n-d;
    int g_c_d = __gcd(d, n); 
    for (int i = 0; i < g_c_d; i++) { 
        /* move i-th values of blocks */
        int temp = arr[i]; 
        int j = i; 
  
        while (1) { 
            int k = j + d; 
            if (k >= n) 
                k = k - n; 
  
            if (k == i) 
                break; 
  
            arr[j] = arr[k]; 
            j = k; 
        } 
        arr[j] = temp; 
    } 
    }
};
