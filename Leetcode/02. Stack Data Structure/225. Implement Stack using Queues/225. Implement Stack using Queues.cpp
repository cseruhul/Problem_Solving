#include <bits/stdc++.h>
using namespace std;
class MyStack {
  public:
    queue<int> q1;
    queue<int> q2;
    MyStack() {
    }

    void push(int x) {
        q1.push(x);
    }

    int pop() {
        int size, number;
        size = q1.size();
        for (int i = 1; i < size; i++) {
            number = q1.front();
            q1.pop();
            q2.push(number);
        }
        number = q1.front();
        q1.pop();
        queue<int> temp;
        temp = q1;
        q1 = q2;
        q2 = temp;
        return number;
    }

    int top() {
        return q1.back();
    }

    bool empty() {
        if (q1.empty() && q2.empty()) {
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 *
 *  Input:
        ["MyStack", "push", "push", "top", "pop", "empty"]
        [[], [1], [2], [], [], []]
    Output
        [null, null, null, 2, 2, false]

 */

int main() {
    MyStack obj;

    obj.push(1);
    obj.push(2);

    cout << obj.top() << endl;
    cout << obj.pop() << endl;
    cout << obj.empty() << endl;

    return 0;
}