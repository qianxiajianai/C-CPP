#include <bits/stdc++.h>
using namespace std;

bool returnTrue() {
    cout << "进入了returnTrue函数" << endl;
    return true;
}
bool returnFalse() {
    cout << "进入了returnFalse函数" << endl;
    return false;
}

int main() {
    // 非负数
    int a = 78;
    cout << a << endl;
    cout << bitset<32>(a) << endl;
    cout << "===a===" << endl;

    // 负数
    int b = -6;
    cout << b << endl;
    cout << bitset<32>(b) << endl;
    cout << "===b===" << endl;

    // 直接写二进制的形式定义变量
    int c = 0b1001110;
    cout << c << endl;
    cout << bitset<32>(c) << endl;
    cout << "===c===" << endl;

    // 直接写十六进制的形式定义变量
    // 0100 -> 4
    // 1110 -> e
    // 0x4e -> 01001110
    int d = 0x4e;
    cout << d << endl;
    cout << bitset<32>(d) << endl;
    cout << "===d===" << endl;

    // ~、相反数(~取反再+1)
    cout << a << endl;
    cout << bitset<32>(a) << endl;
    cout << bitset<32>(~a) << endl;

    int e = ~a + 1;
    cout << e << endl;
    cout << bitset<32>(e) << endl;
    cout << "===e===" << endl;

    // int的最小值，取相反数、绝对值，都是自己
    int f = INT_MIN;
    cout << f << endl;
    cout << bitset<32>(f) << endl;

    cout << -f << endl;
    cout << bitset<32>(-f) << endl;

    cout << ~f + 1 << endl;
    cout << bitset<32>(~f + 1) << endl;
    cout << "===f===" << endl;

    // | & ^
    int g = 0b0001010;
    int h = 0b0001100;
    cout << bitset<32>(g || h) << endl;
    cout << bitset<32>(g & h) << endl;
    cout << bitset<32>(g ^ h) << endl;
    cout << "===g, h===" << endl;
    // 可以这么写：
    int num = 3231 | 6434;
    int num2 = 3231 & 6434;
    // 不能这么写：
    // int num3 = 3231 || 6434;
    // int num4 = 3231 && 6434;
    // 因为 ||, && 是逻辑或、逻辑与，只能连接boolean类型
    // 不仅如此，|, & 连接的两侧一定都会计算
    // 而 ||, && 有穿透性的特点
    cout << "test1测试开始" << endl;
    bool test1 = returnTrue() | returnFalse();
    cout << "test1结果, " << test1 << endl;

    cout << "test2测试开始" << endl;
    bool test2 = returnTrue() || returnFalse();
    cout << "test2结果, " << test2 << endl;

    cout << "test3测试开始" << endl;
    bool test3 = returnFalse() & returnTrue();  // 注意：这是按位与，不是逻辑与！
    cout << "test3结果, " << test3 << endl;

    cout << "test4测试开始" << endl;
    bool test4 = returnFalse() && returnTrue();  // 逻辑与，有短路特性
    cout << "test4结果, " << test4 << endl;

    cout << "===!、&、||、&&===" << endl;
    return 0;
}