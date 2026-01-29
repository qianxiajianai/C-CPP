#include <bits/stdc++.h>
using namespace std;

int main() {
    auto x = 19;
    auto y = 1.8;       //自动判断数据类型
    cout << x << " " << y << endl;

    vector <int> v(10,1);

    //vector set map均可遍历
    for (auto p=v.begin();p!=v.end();p++) {
        cout << *p << " ";
    }
    cout << endl;
    return 0;
}