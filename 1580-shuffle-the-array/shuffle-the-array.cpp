class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> r(2*n);
        for (int i =0; i<n; i++)
        { // if (i%2 == 0)
            r[2*i] = nums[i];
          //  else
            r[2*i + 1] = nums[i+n];
        }
    return r;}
};