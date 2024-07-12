#include<bits/stdc++.h>
using namespace std;
class WeightedQuickFind{
private:
    int id[];
    int size[];
    WeightedQuickFind(int N){
        for(int i = 0; i < N; i++){
            id[i] = i;
            size[i] = 1;
        }
    }
};

class Solution {
    public int longestConsecutive(int[] nums) {

    }
}
int main(){
    WeightedQuickFind wqf = new WeightedQuickFind(10);

    return 0;
}
