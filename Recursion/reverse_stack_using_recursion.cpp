#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void insertAtBottom(stack<int>& st, int x) {
        // Base condition
        if(st.empty()) {
            st.push(x);
            return;
        }

        int topElement = st.top();
        st.pop();

        insertAtBottom(st, x);

        st.push(topElement);
    }

    void reverseStack(stack<int>& st) {
        // Base condition
        if(st.empty()) {
            return;
        }

        int topElement = st.top();
        st.pop();

        reverseStack(st);

        insertAtBottom(st, topElement);
    }
};

int main() {
    int n;
    cin >> n;

    stack<int> st;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    Solution obj;
    obj.reverseStack(st);

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}