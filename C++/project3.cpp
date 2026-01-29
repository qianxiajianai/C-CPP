#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    vector <int> v;
    v.resize(10);   //修改v的空间为10
    for (int i = 0; i < 10; i++) {
        v[i]=i;
    }
    v.push_back(11);    //将一个新的元素加到vector的最后面
    for (int i = 0; i < 11; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    vector <int> v2(10,2);  //空间为10，全部初始化为2，若v2(10)则等价于v2(10,0)
    for (auto p=v2.begin();p!=v2.end();p++) {   //p类似于一个指针
    //v2.end的位置是这个数组的最后一个元素的下一个位置 条件也可这样写for(int i=0; i < s.size(); i++)
        cout << *p << " ";
    }
    return 0;
}