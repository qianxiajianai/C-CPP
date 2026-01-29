#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

struct node {
    int a,b;
    bool operator<(node B) {
        if (a!=B.a) return a<B.a;    //从小到大排序
        return b<B.b;
    }
};

node a[10]={
    {2,3},
    {10,10},
    {5,5},
    {4,4},
    {10,4},
    {7,1},
    {10,10},
    {4,6},
    {10,7},
    {2,8},
};

int main() {
    int i;
    sort(a+0,a+10);
    for (i=0;i<10;i++) {
        printf("%d %d\n",a[i].a,a[i].b);
    }

    return 0;
}