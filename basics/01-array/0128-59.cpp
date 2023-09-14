/*
 * leetcode 59
 *
 * maintain the range as [left, right) always
 *
 */

class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
        vector<vector<int> > ans(n, vector<int>(n, 0));
        int startx = 0, starty = 0;
        int loop = n/2;
        int mid = n/2;
        int count = 1; // assign value to each grid in the matrix
        int offset = 1; // lenght of side, after each loop the edge shrinks
        int i, j;

        while (loop--) {
            i = startx;
            j = starty;
            // four edges, left to right
            for (j = starty; j < n-offset; j++) {
                ans[startx][j] = count++;
            }
            // top to bottom
            for (i = startx; i < n-offset; i++) {
                ans[i][j] = count++;
            }
            // right to left
            for (; j > starty; j--) {
                ans[i][j] = count++;
            }
            // bottom to top
            for (; i > startx; i--) {
                ans[i][j] = count++;
            }

            // when the next loop starts,
            startx++;
            starty++;
            offset += 1;
        }
        // if n is an odd number
        // the center grid does require assignment now at the end
        if (n%2) {
            ans[mid][mid] = count;
        }

        return ans;
    }
};
