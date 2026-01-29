#include <bits/stdc++.h>
using namespace std;

void c(int &a){					    //这样就可以直接将main函数里的a
    a+=1;							//带入c函数中计算，不需要用指针
}								    //来传值

int main(){
        int a=4;
        c(a);
        cout << a << endl;
        return 0;
}
