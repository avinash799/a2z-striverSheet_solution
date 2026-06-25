#include<bits/stdc++.h>
using namespace std;

void reverseAnArray(vector<int>& nums, int l, int r){

    // Base condition
    if(l >= r){
        return;
    }

    swap(nums[l], nums[r]);

    reverseAnArray(nums, l + 1, r - 1);
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5};

    reverseAnArray(nums, 0, nums.size() - 1);

    for(int x : nums){
        cout << x << " ";
    }

    return 0;
}