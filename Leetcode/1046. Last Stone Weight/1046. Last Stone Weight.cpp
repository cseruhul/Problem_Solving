#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int x, y;
        if(stones.size() == 1){
            return stones[0];
        }else{
            sort(stones.begin(), stones.end(), greater<int>());
            y = stones[0];
            x = stones[1];

            while(x != 0){
                stones[0] = y - x;
                stones[1] = 0;

                sort(stones.begin(), stones.end(), greater<int>());

                y = stones[0];
                x = stones[1];

            }
            return stones[0];
        }

    }
};

int main(){
    Solution soln;
    vector<int> stones{2};

    cout << soln.lastStoneWeight(stones);
    return 0;
}
