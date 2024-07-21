#include <vector>
#include <iostream>
#include <map>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        std::map<int, int> unsorted_map;
        for (int i = 0; i < m; i++) {
            unsorted_map[nums1[i]]++;
        }

        for (int i = 0; i < n; i++) {
            unsorted_map[nums2[i]]++;
        }

        std::vector<int> sorted;


        for (auto &entry : unsorted_map) {
            for (int j = 0; j < entry.second; j++) {
                sorted.push_back(entry.first);
            }
        }
        
        nums1 = sorted;
    }
};

