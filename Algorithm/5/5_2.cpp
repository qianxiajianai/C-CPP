#include <bits/stdc++.h>
using namespace std;

void f(string& s, int i, vector<char>& path, int size, unordered_set<string>& set) {
    if (i == s.length()) {
        string str(path.begin(), path.begin() + size);
        set.insert(str);
    } else {
        // 包含当前字符
        if (size < path.size()) {
            path[size] = s[i];
        } else {
            path.push_back(s[i]);
        }
        f(s, i + 1, path, size + 1, set);
        
        // 不包含当前字符
        f(s, i + 1, path, size, set);
    }
}

vector<string> generatePermutation(string str) {
    unordered_set<string> set;
    vector<char> path(str.length());  // 预分配空间
    
    f(str, 0, path, 0, set);
    
    int m = set.size();
    vector<string> ans(m);
    int i = 0;
    for (string cur : set) {
        ans[i++] = cur;
    }
    return ans;
}

int main() {
    string str = "abc";
    vector<string> result = generatePermutation(str);
    cout << "字符串 " << str << " 的所有子序列：" << endl;
    for (int i = 0; i < result.size(); i++) {
        if (result[i].empty()) {
            cout << i + 1 << ": (空字符串)" << endl;
        } else {
            cout << i + 1 << ": " << result[i] << endl;
        }
    }
    cout << "总数: " << result.size() << endl;
    
    return 0;
}