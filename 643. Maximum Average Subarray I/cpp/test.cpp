#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int size = nums.size();

        double windowSum = 0;
        for(int i = 0; i< k; i++){
            windowSum += nums[i];
        }
        double maxSum = windowSum / k;
        for(int i = 0; i < size; i++) {
            windowSum = windowSum - nums[i]; 
            if(k+i < size){
                windowSum = windowSum + nums[k+i];
                double avg = windowSum / k;
                maxSum = max(maxSum, avg);
            }
        }
        return maxSum;
    }
};

int main() {
    vector<int> nums = {1,12,-5,-6,50,3};
    int k = 4;
    Solution sol;
    double result = sol.findMaxAverage(nums, k);
    cout << result << endl;
    return 0;
}