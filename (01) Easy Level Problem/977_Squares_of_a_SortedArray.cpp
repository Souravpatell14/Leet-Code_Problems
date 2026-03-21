#include<vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);

        int left = 0;
        int right = n - 1;
        int k = n - 1;

        while(left <= right) {
            int leftSq = nums[left] * nums[left];
            int rightSq = nums[right] * nums[right];

            if(leftSq > rightSq) {
                result[k] = leftSq;
                left++;
            } else {
                result[k] = rightSq;
                right--;
            }
            k--;
        }

        return result;
    }
};