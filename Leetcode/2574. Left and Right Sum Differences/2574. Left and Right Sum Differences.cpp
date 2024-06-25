#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int i, n, left, right, j;
        n = nums.size();
        vector<int> answer(n);

        for(i = 0; i < n; i++){
            left = 0;
            right = 0;
            for(j = i-1; j >= 0; j--){
                left += nums[j];
            }
            for(j = i + 1; j < n; j++){
                right += nums[j];
            }
            answer[i] = abs(left - right);
        }
        return answer;
        for(i = 0; i < n; i++)
            cout << answer[i] << " ";
    }
};

int main(){
    vector<int> nums = {10,4,8,3};
    Solution obj1;

    obj1.leftRightDifference(nums);

    return 0;
}
