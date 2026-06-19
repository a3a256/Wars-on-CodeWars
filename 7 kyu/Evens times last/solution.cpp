#include <vector>

int even_last(std::vector<int> nums) {
  int ans = 0;
  int i;
  for(i=0; i<nums.size(); i+=2){
    ans += nums[i]*nums.back();
  }
  return ans;
}
