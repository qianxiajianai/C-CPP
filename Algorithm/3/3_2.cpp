//差分
/*题目描述
现有 1~n 共 n 个连续航班，若干条预订指令。每条指令表示「从第 a 航班到第 b 航班，每个航班新增 c 个预订座位」。
请计算每个航班的最终总预订数。
输入格式
第一行：两个整数 n（航班总数）、m（预订指令数）接下来 m 行：每行三个整数 a、b、c（分别表示指令的起点航班、终点航班、新增座位数）
输出格式
一行 n 个整数，依次表示第 1~n 个航班的最终总预订数*/
//一维差分
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    int book[n+2]={0};
    //设置差分数组
    for (int i=0;i<m;i++) {
        int l,r,x;
        cin >> l >> r >> x;
        book[l] += x;
        book[r+1] -= x;
    }
    for (int i=1;i<=n;i++) book[i] += book[i-1];
    for (int i=1;i<=n;i++) cout << book[i] << " ";
    return 0;
}