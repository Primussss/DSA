#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int minDiff = INT_MAX, ans = 0;

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1, right = n - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == target) {
                    return sum;
                }

                int currDiff = abs(sum - target);
                if (currDiff < minDiff) {
                    minDiff = currDiff;
                    ans = sum;
                }

                if (sum > target) {
                    right--;
                } else {
                    left++;
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    int result = sol.threeSumClosest(nums, target);
    cout << "Closest sum: " << result << endl;

    return 0;
}
