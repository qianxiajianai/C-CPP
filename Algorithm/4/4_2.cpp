#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n + 1);      // 原数组
    vector<int> prefix_xor(n + 1, 0);  // 前缀异或数组
    // 构建前缀异或数组
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        prefix_xor[i] = prefix_xor[i - 1] ^ arr[i];
    }
    // 查询示例
    int q;  // 查询次数
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        // 计算区间 [l, r] 的异或和
        int result = prefix_xor[r] ^ prefix_xor[l - 1];
        cout << result << endl;
    }
    return 0;
}