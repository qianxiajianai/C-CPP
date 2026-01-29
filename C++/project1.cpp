/*
结构体可以用来打包各种数据到同一个数据类型中
这个数据类型可直接定义一个变量例如student s[1000];
其中student这个结构体中包含了name(字符串) score(整型)
输入输出时可以直接用s[i].name	s[i].score来访问
*/
#include<bits/stdc++.h>
using namespace std;

struct st {
    string name;
    int chinese;   //相当于自定义一个数据类型
    int math;
    int english;

    int getsum() const {
        return chinese+math+english;
    }
    //运算符重载
    bool operator<(const st& y) const {
        if (getsum()<y.getsum()) return true;
    }
};

int n;
st s[10000];
int main() {
    //结构体，打包一些数据
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>s[i].name>>s[i].chinese>>s[i].math>>s[i].english;
    }
    st best=s[1];
    for(int i=1;i<=n;i++) {
        if (best<s[i]) best=s[i];
    }
    cout<<best.name<<" "<<best.chinese<<" "<<best.math<<" "<<best.english<<endl;
    return 0;
}