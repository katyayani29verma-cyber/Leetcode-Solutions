class Solution {
public:
    int subtractProductAndSum(int n) {
       // string s = to_string(n);
        int p =1;
        int s =0;
      ///  int r;
      int d;

        while(n!=0)
        {
            s = n%10+s;
            p = p*(n%10);
            n = n/10;
        }
        d = p-s;
        return d;
    }
};