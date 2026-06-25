#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortStack(stack<int> &st) {

        // base condition
        if(st.empty())
            return;

        int topElement = st.top();
        cout << topElement << endl;
        st.pop();

        sortStack(st);
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

    return 0;
}