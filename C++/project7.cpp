#include <bits/stdc++.h>
#include<queue>
using namespace std;

int main() {
    queue <int> s;
    for (int i = 1; i <= 10; i++) {
        s.push(i);          //入队 s.push(i) 出队 s.pop()
    }
    cout << "队首为：" << s.front() << endl << "队尾为：" << s.back() << endl;
    s.pop();        //队首出队
    cout << "队首为：" << s.front() << endl << "队尾为：" << s.back() << endl;
    s.push(11);
    cout << "队首为：" << s.front() << endl << "队尾为：" << s.back() << endl;
    cout << s.size() << endl;
    return 0;
}