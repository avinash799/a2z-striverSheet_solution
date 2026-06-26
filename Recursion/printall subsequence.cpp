#include <iostream>
#include <vector>
using namespace std;

void printSubsequence(int index, vector<int> &arr, vector<int> &ans) {

    // Base case
    if (index == arr.size()) {

        if (ans.size() == 0) {
            cout << "{}";
        } else {
            for (int x : ans)
                cout << x << " ";
        }

        cout << endl;
        return;
    }

    // Take the element
    ans.push_back(arr[index]);
    printSubsequence(index + 1, arr, ans);

    // Don't take the element
    ans.pop_back();
    printSubsequence(index + 1, arr, ans);
}

int main() {

    vector<int> arr = {3, 1, 2};
    vector<int> ans;

    printSubsequence(0, arr, ans);

    return 0;
}