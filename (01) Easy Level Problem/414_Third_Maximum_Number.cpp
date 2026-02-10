// Method 1st :-

// class Solution {
// public:
//     int thirdMax(vector<int>& nums) {
//         set<int> s;

//         for (int x : nums) {
//             s.insert(x);
//         }
//         if (s.size() < 3) {
//             return *s.rbegin();
//         }
//         auto it = s.rbegin();
//         it++; 
//         it++; 

//         return *it;
//     }
// };

#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;

        for (int x : nums) {
            if (x == first || x == second || x == third)
                continue;
                
            if (x > first) {
                third = second;
                second = first;
                first = x;
            }
            else if (x > second) {
                third = second;
                second = x;
            }
            else if (x > third) {
                third = x;
            }
        }

        return (third == LLONG_MIN) ? first : third;
    }
};