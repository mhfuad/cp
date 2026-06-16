#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int result;
        int length = 0;
        int total = 0;
        int slide = nums[0] + nums[1];

        for(int i; i < nums.size(); i++) {
            if( nums[i] == target){
                return 1;
            }
        }

        for(int i = 0; i < nums.size(); i++) {
            total += nums[i];
        }

        if(total < target){
            return 0;
        }

        for(int i = 0; i < nums.size(); i++) {
            if(slide < target){
                slide = slide - nums[i] + nums[1+i];
            }else{
                result = 2;
            }
        }
        
        return result;
    }
};

int main(){
    Solution s;
    vector<int> nums = {2,3,1,2,4,3};
    cout << s.minSubArrayLen(7, nums) << endl;
    return 0;
}