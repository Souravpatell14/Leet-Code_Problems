#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos = 0;  // next position for non-zero

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[pos] = nums[i];
                if (i != pos) {
                    nums[i] = 0;
                }
                pos++;
            }
        }
    }
};
