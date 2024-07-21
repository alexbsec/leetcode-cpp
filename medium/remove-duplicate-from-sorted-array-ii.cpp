#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.size() <= 2) {
            return nums.size();
        }

        int i = 1;
        int count = 1;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] == nums[j-1]) {
                count++;
            } else {
                count = 1;
            }

            if (count <= 2) {
                nums[i] = nums[j];
                i++;
            }
        }

        return i;

    }
};