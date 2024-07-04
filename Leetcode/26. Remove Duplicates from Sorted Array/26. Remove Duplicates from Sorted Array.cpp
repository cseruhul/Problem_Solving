#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int>answer;
        int i = 0;
        for(auto item:nums)
        {
            answer[item]++;
        }
        map<int,int>::iterator itr;
        for(itr = answer.begin(); itr != answer.end(); itr++){
            nums[i++] = itr->first;
        }

        for(auto item:nums)
        {
            cout << item << " ";
        }
        return answer.size();
    }
};

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    Solution soln;

    int n = soln.removeDuplicates(nums);
    cout << endl << n << endl;

    return 0;
}
