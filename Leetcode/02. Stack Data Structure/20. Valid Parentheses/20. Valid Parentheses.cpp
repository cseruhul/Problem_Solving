#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<int>str;
        int n = s.length(), flag = 0;
        unordered_map<char, char> bracket_map;
        bracket_map['('] = ')';
        bracket_map['{'] = '}';
        bracket_map['['] = ']';

        if(n == 1) return false;
        for(int i = 0; i < n; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                str.push(s[i]);
            }else{
                char ch = str.top();
                //cout << ch << bracket_map[ch] << endl;
                str.pop();
                if(bracket_map[ch] == s[i])
                    flag = 1;
                else
                    flag = 0;
            }
        }

        return flag == 1;

    }
};

int main(){
    //string s = "()[]{}";
    string s = "()";
    //string s = "(";
    //string s = "(]";
    //string s = "((";
    Solution obj;

    cout << "The result is: " << obj.isValid(s) << endl;
    return 0;
}
