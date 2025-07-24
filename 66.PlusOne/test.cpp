#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> digits = {1, 2, 3};
    
    int n = 0;
    

    for(int i = 0; i <= digits.size() -1; i++) {
        int temp = digits.at(i);
        n = n * 10 + temp;
        cout << "n: " << n << endl;
    }

    n = n + 1;

    // vector<int> result (digits.size());

    // for(int i = result.size() -1; i >= 0; i--) {
    //     result.at(i) = n % 10;
    //     n /= 10;
    // }

    // cout << "Result: " << n << endl;
    // for(int i = n; i > 0; i /= 10){
    //     cout << i << ",";
    // }

    // for(int i : result) {
    //     cout << i << " ";
    // }
    return 0;
}

