#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
    map <string,int> m; //键值对

    m["hello"]=4;   //m为结构体集合   相当于一个字符串数组
    m["world"]=3;   //键值对排序只与首字母（以此类推）的ASCII码的值有关（从小到大排序），与后面的值无关
    m["ilovewuhan"]=5;
    m["ha"]=6;

    cout << "hello: " << m["hello"] << endl;

    for(auto p=m.begin();p!=m.end();p++) {  //p为结构体指针
        cout << p->first << " : " << p->second << endl; //p用结构体指针访问m
    }
    //可直接auto &p:m
    for(auto p : m) {
        cout << p.first << " : " << p.second << endl;
    }
    cout << "map的长度为" <<m.size() << endl;
    return 0;
}