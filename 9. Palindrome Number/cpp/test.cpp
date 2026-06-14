#include <iostream>
using namespace std;

class Solution {
    public:
    bool isPalindrome(int x) {
        if (x < 0) return false;            // negative numbers are not palindrome
        if (x % 10 == 0 && x != 0) return false; // numbers ending with 0 (but not 0) can't be palindrome

        int reverted = 0;
        // build the reversed second half of the number
        while (x > reverted) {
            reverted = reverted * 10 + x % 10;
            x /= 10;
        }

        // For even length: x == reverted
        // For odd length: x == reverted/10 (middle digit ignored)
        cout << "x: " << x << ", reverted: " << reverted << endl;
        return (x == reverted) || (x == reverted / 10);
    }
};

int main(){
    Solution s;
    cout << s.isPalindrome(11) << endl;
    cout << s.isPalindrome(-121) << endl;
    cout << s.isPalindrome(10) << endl;
    return 0;
}