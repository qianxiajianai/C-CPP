#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main() {
    stack <int> s;

    s.push(1);
    s.push(2);  //压栈
    s.push(3);
    s.pop();        //出栈
    s.push(76);

    cout << s.top() << endl;    //栈顶

    cout << "栈的长度为：" << s.size() << endl;
    //根据栈的定义，对于任何操作和获取栈的数据都只能获取栈顶的值
    return 0;
}