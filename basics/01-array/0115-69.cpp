/*
 * leetcode 69
 * 
 * how to get the square root of a:
 * guess one x, then x = (x + a/x)/2
 * after several iterations, x will be close enough to the square root of a
 * 
 * f(x) = x^2 - a
 * f'(x) = 2x
 * x-f(x)/f'(x) = x - (x^2-a)/2x = (x+a/x)/2
 *
 */

class Solution {
public:
    int s;
    double newton(double x) {
        double res = (x + s / x) / 2;
        if (res == x) {
            return x;
        } else {
            return newton(res);
        }
    }
    int mySqrt(int x) {
        s = x;
        if (x == 0) return x;
        return (int)newton(x);    
    }
};

// binary
class Solution {
public:
    int mySqrt(int x) {
        int low = 0, high = x, ans;
        long long sqr, mid;

        if (x < 0) return -1;

        while (low <= high) {
            mid = low+(high-low)/2;
            sqr = mid*mid;
            if (sqr == x) return mid;
            else if (sqr < x) {
                ans = mid;
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
        return ans;
    }
};
