/*
 * leetcode 303
 *
 */

class NumArray {
private:
    vector<int> a;

public:
    NumArray(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            a.push_back(nums[i]);
        }    
    }
    
    int sumRange(int left, int right) {
        int sum = 0;
        for (int i = left; i <= right; i++) {
            sum += a[i];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

// solution 2
class NumArray {
private:
    vector<int> preSum;

public:
    NumArray(vector<int>& nums) {
        int sum = 0;
        preSum.push_back(sum); // first
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            preSum.push_back(sum);
        }    
    }
    
    int sumRange(int left, int right) {
        return preSum[right+1]-preSum[left];
    }
};

