#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l, r, m, n;
        l = 0;
        n = nums.size();
        r = n - 1;
        while(l <= r){
            m = l + (r - l) / 2;
            cout << m << endl;
            if(m == 0)
                return 0;
            if(m == n - 1)
                return n;

            if(nums[m - 1] < target && nums[m] >= target){
                return m;
            }
            if(target < nums[m]){
                r = m-1;
            }else{
                l = m+1;
            }
        }
        return 0;
    }
};

int main(){
    vector<int>nums ={1};
    int target = 0;
    Solution obj;

    cout << obj.searchInsert(nums, target);

    return 0;
}
