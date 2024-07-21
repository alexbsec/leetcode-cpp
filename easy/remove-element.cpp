#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int k = nums.size();
        int counter = 0;
        std::vector<int> new_nums;
        for (int i = 0; i < nums.size(); i++) {
            if (val == nums[i]) {
                k--;
            } else {
                new_nums.push_back(nums[i]);
                nums[counter] = new_nums[counter];
                counter++;
            }
        }

        return k;
    }
};