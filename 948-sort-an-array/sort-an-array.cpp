class Solution {
private:
    void merge (vector<int> &arr, int l, int mid, int r, vector<int> &temp){
        int st1 = l;
        int st2 = mid + 1;
        int n1 = mid - l + 1;
        int n2 = r - mid;

        for (int i = 0; i < n1; ++i)
            temp[st1 + i] = arr[st1 + i];
        for (int i = 0; i < n2; ++i) {
            temp[st2 + i] = arr[st2 + i];
        }

        int i = 0, j = 0, k = l;

        while (i < n1 && j < n2){
            if (temp[st1 + i] < temp[st2 + j]){
                arr[k] = temp[st1 + i];
                ++i;
            } else {
                arr[k] = temp[st2 + j];
                ++j;
            }
            ++k;
        }

        while (i < n1) {
            arr[k] = temp[st1 + i];
            ++i;
            ++k;
        }
        while (j < n2) {
            arr[k] = temp[st2 + j];
            ++j;
            ++k;
        }
    }

    void mergeSort(vector<int> &arr, int l, int r, vector<int> &temp) {
        if (l >= r) {
            return;
        }
        int mid = (l + r) / 2;

        mergeSort(arr, l, mid, temp);
        mergeSort(arr, mid + 1, r, temp);

        merge(arr, l, mid, r, temp);
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> tempArr(nums.size());
        mergeSort (nums, 0, nums.size() - 1, tempArr);
        return nums;
    }
};