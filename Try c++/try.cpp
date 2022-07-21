class Solution {
 public:
  int maximumSum(vector& nums) {
    vectorans;
    for (int i = 0; i < nums.size(); i++) {
      int n = nums[i];
      int sum = 0;
      while (n > 0) {
        int rem = n % 10;
        sum += rem;
        n = n / 10;
      }
      ans.push_back(sum);
    }
    int ans1 = -1;
    map<int, vector> mp;
    for (int i = 0; i < ans.size(); i++) {
      mp[ans[i]].push_back(nums[i]);
    }
    for (auto i : mp) {
      int sum = 0;
      if ((i.second).size() > 1) {
        for (int j = 0; j < (i.second).size() - 1; j++)
          sum = max(sum, (i.second)[j] + (i.second)[j + 1]);
        ans1 = max(sum, ans1);
      }
    }

    return ans1;
  }
};