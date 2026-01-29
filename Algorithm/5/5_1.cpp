#include <bits/stdc++.h>
using namespace std;

// 求arr[l...r]范围上的最大值
int f(vector<int>& arr, int l, int r) {
    if (l == r) return arr[l];
    int m = (l + r) / 2;
    int lmax = f(arr, l, m);
    int rmax = f(arr, m + 1, r);
    return max(lmax, rmax);
}

int maxValue(vector<int>& arr) {
    return f(arr, 0, arr.size() - 1);
}

int main() {
    vector<int> arr = {3, 8, 7, 6, 4, 5, 1, 2};
    cout << "数组最大值 : " << maxValue(arr) << endl;
    return 0;
}