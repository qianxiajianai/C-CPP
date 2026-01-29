#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){
    set <int> s;    //集合
    s.insert(1);    //set会自动把所有元素从大到小排序
    s.insert(2);
    s.insert(3);

    for (auto p=s.begin();p!=s.end();p++) {     //s.end指针也是指向这个集合的元素的下一个元素
        cout << *p << " ";
    }

    cout << endl;
    cout << (s.find(2)!=s.end()) << endl;   //查找的值是布尔值找到了输出1，没找到输出0
    cout << (s.find(4)!=s.end()) << endl;   //s.find返回值是一个指针

    s.erase(1);
    cout << (s.find(1)!=s.end()) << endl;   //应该输出0
    return 0;
}
