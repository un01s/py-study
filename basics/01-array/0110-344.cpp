/*
 * leetcode 344
 * reverse string
 *
 */

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size()-1;
        char tmp;
        while(left < right) {
            // swap here
            tmp = s[right];
            s[right] = s[left];
            s[left] = tmp;
            left++;
            right--;
        }
    }
};

