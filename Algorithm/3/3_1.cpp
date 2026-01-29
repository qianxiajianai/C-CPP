/*P8218 【深进1.例1】求区间和
题目描述
给定由n个正整数组成的序列a1，a2,··,an和m个区间[，r]，分别求这m个区间的区间和。
输入格式
1.第一行包含一个正整数n，表示序列的长度。
2.第二行包含n个正整数a1,a2,·.,an。
3.第三行包含一个正整数m，表示区间的数量。
4.接下来m行，每行包含两个正整数li，ri，满足1≤li≤ri≤n。
输出格式
共m行，其中第i行包含一个正整数，表示第i组询问的区间和。*/
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    int sum[n+1];
    sum[0]=0;
    for (int i=1;i<n+1;i++) sum[i]=sum[i-1]+a[i-1];

    int m;
    cin >> m;
    int l,r;
    for (int i=0;i<m;i++) {
        cin >> l >> r;
        cout << sum[r]-sum[l-1];
    }
    return 0;
}
