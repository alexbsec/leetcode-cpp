#include <vector>

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        int rotations = k % nums.size();
        int j = nums.size() - 1;
        for (int i = 0; i < nums.size()/2; i++) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j--] = temp;
        }

        j = rotations - 1;

        for (int i = 0; i < j; i++) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j--] = temp;
        }

        j = nums.size() - 1;

        for (int i = rotations; i < j; i++) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j--] = temp;
        }

    }
};