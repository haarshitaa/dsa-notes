#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> num3; // Merged sorted array
        int x = 0, y = 0; // Pointers for nums1 and nums2
        
        // Merge the two sorted arrays
        while (x < nums1.size() && y < nums2.size()) {
            if (nums1[x] < nums2[y]) {
                num3.push_back(nums1[x++]);
            } else {
                num3.push_back(nums2[y++]);
            }
        }
        
        // Add remaining elements from nums1
        if (x == nums1.size()) {
            while (y < nums2.size()) {
                num3.push_back(nums2[y++]);
            }
        }
        // Add remaining elements from nums2
        else if (y == nums2.size()) {
            while (x < nums1.size()) {
                num3.push_back(nums1[x++]);
            }
        }
        
        // Calculate median
        double ans;
        if (num3.size() % 2 == 0) {
            ans = double(num3[num3.size() / 2] + num3[(num3.size() / 2) - 1]) / 2;
        } else {
            ans = num3[num3.size() / 2];
        }
        return ans;
    }
};

int main() {
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    Solution sol;
    cout << sol.findMedianSortedArrays(nums1, nums2) << " ";
    return 0;
}