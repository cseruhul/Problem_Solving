#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string truncateSentence(string s, int k) {
        int space = 0, i = 0;
        string answer;
        for(auto item : s){
            if(item == ' '){
                space++;
            }
            if(item == k){

            }

        }

        cout << space;

    }
};

int main(){
    string s = "Hello how are you Contestant";
    int k = 4;
    Solution solN;

    solN.truncateSentence(s, k);
    return 0;
}
