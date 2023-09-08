/*
 * leetcode 59
 *
 */

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0));
        
        int startx = 0, starty = 0;
        int loop = n / 2; 
        int mid = n / 2; 
        int count = 1; 
        int offset = 1; 
        int i,j;
        while (loop --) {
            i = startx;
            j = starty;

            // [left, right)
            for (j = starty; j < n - offset; j++) {
                res[startx][j] = count++;
            }
            // [up, down)
            for (i = startx; i < n - offset; i++) {
                res[i][j] = count++;
            }
            // [right, left)
            for (; j > starty; j--) {
                res[i][j] = count++;
            }
            // [down, up)
            for (; i > startx; i--) {
                res[i][j] = count++;
            }

            // next circle
            startx++;
            starty++;
            offset += 1;
        }

        if (n % 2) {
            res[mid][mid] = count;
        }
        return res;    
    }
};
