// ȥ���������������һ�� 1
// ��������������������� 1 �ĸ���
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
