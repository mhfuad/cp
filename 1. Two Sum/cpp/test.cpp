#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() -1;
        vector<int> res;
        while(i < nums.size() -1 && j >= 0) {
            int search = target - nums[i];
            if(search == nums[j] && i != j) {
                res.push_back(i);
                res.push_back(j);
                break;
            } else {
                if(j == 0){
                    i++;
                    j = nums.size() - 1;
                }else {
                    j--;
                }
            }
        }
        return res;
    }
};

class Solution2 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        
        
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++){
            int search = target - nums[i];
            if(mp.find(search) != mp.end() && mp[search] != i){
                return {i, mp[search]};
            }
        }
        return {};
    }
};

int main() {
    vector<int> nums = {3, 2, 4};
    int target = 6;
    Solution2 sol;
    vector<int> result = sol.twoSum(nums, target);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}