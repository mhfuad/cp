#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int window_sum = 0;
        int min_length = INT_MAX;

        for (int right = 0; right < nums.size(); right++) {
            window_sum += nums[right];
            
            while( window_sum >= target) {
                min_length = min(min_length, right - left + 1);
                window_sum -= nums[left];
                left += 1;
            }
        }       
        return (min_length == INT_MAX) ? 0 : min_length;
    }
};

int main(){
    Solution s;
    vector<int> nums = {12,28,83,4,25,26,25,2,25,25,25,12};
    cout << s.minSubArrayLen(213, nums) << endl;
    return 0;
}