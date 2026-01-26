#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n = A.size();
        int st = 0, end = n - 1;

        while (st < end) {
            int mid = st + (end - st) / 2;

            if (mid % 2 == 1) 
                mid--;   // ensure mid is even

            if (A[mid] == A[mid + 1]) {
                st = mid + 2;   // single is on right
            } else {
                end = mid;      // single is on left
            }
        }
        return A[st];
    }
};
