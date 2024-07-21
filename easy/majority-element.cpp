#include <unordered_map>
#include <vector>
#include <algorithm>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        std::unordered_map<int, int> hashmap;

        for (int num : nums) {
            hashmap[num]++;
        }

        int most_repeated = 0;
        int highest_count = 0;

        for (const auto& pair : hashmap) {
            if (pair.second > highest_count) {
                most_repeated = pair.first;
                highest_count = pair.second;
            }
        }

        return most_repeated;
    }

    int majorityElementUsingSort(std::vector<int>& nums) {
      std::sort(nums.begin(), nums.end());
      return nums[nums.size() / 2];
    }
};