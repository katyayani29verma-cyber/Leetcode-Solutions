class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        //int n = accounts[i].size();
        vector<int> sum(m); 
        for (int i =0; i<m ; i++)
        {        int n = accounts[i].size();
                int s =0;
            for (int j =0; n>j; j++)
            {
                s = s+accounts[i][j];
            }
            sum[i]=s;
        }
        int max = sum[0];
       for (int i =0; i<sum.size() ; i++)
       {
          if (sum[i]>max)
          {
            max = sum[i];
          } 
       }
       return max;
    }
    
};