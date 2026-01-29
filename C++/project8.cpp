#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main() {
    unordered_map<string, int> m;
    unordered_set<string> s;

    s.insert({"1"});
    s.insert({"7"});
    s.insert({"5"});

    m["hello"]=1;
    m["world"]=2;
    m["ha"]=3;
    m["hlkwe"]=4;
    m["hlkwt"]=5;

    for (auto p=s.begin();p!=s.end();p++) {
        cout << *p << endl;
    }
    for (auto p=m.begin();p!=m.end();p++) {
        cout << p->first << " " << p->second << endl;
    }
    return 0;
}

