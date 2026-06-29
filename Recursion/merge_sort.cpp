class Solution {
public:

    void merge(vector<int> &arr, int low, int mid, int high) {

        vector<int> ans;

        int left = low;
        int right = mid + 1;

        while(left <= mid && right <= high) {

            if(arr[left] <= arr[right])
                ans.push_back(arr[left++]);
            else
                ans.push_back(arr[right++]);
        }

        while(left <= mid)
            ans.push_back(arr[left++]);

        while(right <= high)
            ans.push_back(arr[right++]);

        for(int i = low; i <= high; i++) {
            arr[i] = ans[i - low];
        }
    }

    void mS(vector<int> &arr, int low, int high) {

        if(low >= high)
            return;

        int mid = low + (high - low) / 2;

        mS(arr, low, mid);
        mS(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }

    void mergeSort(vector<int> &arr, int n) {
        mS(arr, 0, n - 1);
    }
};