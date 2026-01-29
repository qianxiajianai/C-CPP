/*等差数列差分模版 洛谷P4231
一开始 1~n 范围上的数字都是 0，一共有 m 个操作，每次操作为((l,r,s,e,d))，
表示在l~r范围上依次加上首项为s、末项为e、公差为d的数列。m 个操作做完之后，统计 1~n 范围上所有数字的最大值和异或和。
数据范围：(1 <= n <= 10^7)(1 <= m <= 3 * 10^5)(1 <= l <= r <= n)*/
#include <bits/stdc++.h>
using namespace std;

int n,m;
long long arr[10000010]={0};

void change(int l, int r, int s, int e) {
    int d = (e-s)/(r-l);
    arr[l] += s;
    arr[l+1] += d - s;
    arr[r+1] -= d + e;
    arr[r + 2] += e;
}
void build() {
    for (int i = 1; i <= n; i++) {
        arr[i] += arr[i - 1];
    }
    for (int i = 1; i <= n; i++) {
        arr[i] += arr[i - 1];
    }
}

int main() {
    scanf("%d %d",&n,&m);
    for (int i=0;i<m;i++) {
        int l,r,s,e;
        scanf("%d %d %d %d",&l,&r,&s,&e);
        change(l,r,s,e);
    }
    build();

    long long max_val = arr[1];
    long long xor_sum = arr[1];

    for (int i = 2; i <= n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
        xor_sum ^=  arr[i];
    }

    printf("%lld %lld",xor_sum,max_val);

    return 0;
}