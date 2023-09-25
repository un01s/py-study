/*
 * leetcode 2865
 * 
 */

class Solution {
public:
    using ll = long long;
    long long maximumSumOfHeights(vector<int>& m) {
        vector<pair<ll, ll>> stk;
        int n = m.size();
        vector<ll> a(n), b(n);
        ll sum = 0;
        for(int i = 0; i < n; i++){
            ll q = 1;
            while(!stk.empty() && stk.back().first > m[i]){
                sum -= stk.back().first * stk.back().second;
                q += stk.back().second;
                stk.pop_back();
            }
            sum += m[i] * q;
            stk.emplace_back(m[i], q);
            a[i] = sum;
        }
        sum = 0;
        stk.clear();
        for(int i = n - 1; i >= 0; i--){
            ll q = 1;
            while(!stk.empty() && stk.back().first > m[i]){
                sum -= stk.back().first * stk.back().second;
                q += stk.back().second;
                stk.pop_back();
            }
            sum += m[i] * q;
            stk.emplace_back(m[i], q);
            b[i] = sum;
        }
        ll res = 0;
        for(int i = 0; i < n; i++) res = max(res, a[i] + b[i] - m[i]);
        return res;    
    }
};

