// 去掉变量二进制最后一个 1
// 下面代码可以求变量二进制 1 的个数
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    int a = 2015;
    while (a) {
        printf("%#X %#X ", a, a - 1);
        a = a & (a - 1);
        printf("%#X\n", a);
    }
    return 0;
}
