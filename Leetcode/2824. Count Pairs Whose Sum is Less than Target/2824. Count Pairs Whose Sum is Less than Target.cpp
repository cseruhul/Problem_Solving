#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int i, j, ans = 0, n = nums.size();
        for(i = 0; i < n; i++){
            for(j = i + 1; j < n; j++){
                if(nums[i]+nums[j] < target)
                    ans++;
            }
        }
        return ans;
    }
};

int main(){
    vector<int> nums = {-6,2,5,-2,-7,-1,3};
    Solution soln;
    int target = -2;

    cout << soln.countPairs(nums, target);

    return 0;
}
