class Solution {
public:
    void reverseString(vector<char>& s) {
        int c = s.size();
        vector<char> arr(c);

        for (int i = 0; i < c; i++) {
            arr[i] = s[i];
        }

        for (int i = 0; i < c; i++) {
            s[i] = arr[c - i - 1];
        }
    }
};