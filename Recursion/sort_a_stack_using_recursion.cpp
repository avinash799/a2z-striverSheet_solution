#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void insertSorted(stack<int>& st, int x) {
        if(st.empty() || st.top() <= x) {
            st.push(x);
            return;
        }

        int topElement = st.top();
        st.pop();

        insertSorted(st, x);

        st.push(topElement);
    }

    void sortStack(stack<int>& st) {
        if(st.empty()) {
            return;
        }

        int topElement = st.top();
        st.pop();

        sortStack(st);

        insertSorted(st, topElement);
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
    obj.sortStack(st);

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}