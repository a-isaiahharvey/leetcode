#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> m;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
      if (m.find(target - nums[i]) == m.end()) {
        m[nums[i]] = i;
      } else {
        result.push_back(m[target - nums[i]]);
        result.push_back(i);
      }
    }
    return result;
  }
};

#include <iostream>

int main() {
  Solution solution;

  std::vector<int> nums1;
  nums1.push_back(2);
  nums1.push_back(7);
  nums1.push_back(11);
  nums1.push_back(15);
  int target1 = 9;
  std::vector<int> output1 = solution.twoSum(nums1, target1);
  std::vector<int> expected1;
  expected1.push_back(0);
  expected1.push_back(1);
  assert(output1 == expected1);

  std::vector<int> nums2;
  nums2.push_back(3);
  nums2.push_back(2);
  nums2.push_back(4);
  int target2 = 6;
  std::vector<int> output2 = solution.twoSum(nums2, target2);
  std::vector<int> expected2;
  expected2.push_back(1);
  expected2.push_back(2);
  assert(output2 == expected2);

  std::vector<int> nums3;
  nums3.push_back(3);
  nums3.push_back(3);
  int target3 = 6;
  std::vector<int> output3 = solution.twoSum(nums3, target3);
  std::vector<int> expected3;
  expected3.push_back(0);
  expected3.push_back(1);
  assert(output3 == expected3);

  return 0;
}